#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
void input(int *arr,int &n);
void output(int *arr,int n);
void rand_array(int *arr,int n);
int maximum(int *a,int n);
int minimum(int *a,int n);
void udaleniye(int *a,int &n,int k);
int bolshemax(int *a,int n,int max);
void mix(int *a,int n);
void vstavka(int *a,int &n,int k,int m);
void finput(int *a,int &n);
void foutput(int *a,int n,int m);
int main()
{
	setlocale(0,"");
	srand(time(NULL));
	int i=0,j=0,n,l,k,m,min,max;
	int arr[100];
do{	
	do{
		printf("1-���� � ����������, 2-��������� ����� �� a �� b, 3-�� �����, 0-�����:\n");
		scanf("%d",&k);
	}while(k!=0 && k!=1 && k!=2 && k!=3);

	if(k!=0)
	{	
		if(k==1)
		{
			do{
			printf("������� ���������� ��������� � �������:\n");
			scanf("%d",&n);
			}while(n<0);
			input(arr,n);
			output(arr,n);
		}	
		else	
		if(k==2)
			{
				do{
				printf("������� ���������� ��������� � �������:\n");
				scanf("%d",&n);
				}while(n<0);
				rand_array(arr,n);
				output(arr,n);
			}
		else
		if(k==3)
			{
				finput(arr,n);	
				output(arr,n);
			}	
			min=minimum(arr,n);
			max=maximum(arr,n);
			m=bolshemax(arr,n,max);
			mix(arr,n);
		if(min==-1 || min==1)
		{
			printf("�� ������� ������ �� ��������!\n");
		}
		else
		{
			
			while(i>=0 && i<n)
			{
				if(abs(arr[i])%abs(min)==0) 
					{
						udaleniye(arr,n,i);
						i--;
					}
				i++;
			}
			i=0;		
			while(j>=0 && j<n)
				{
					if(arr[j]>0)
						{
							vstavka(arr,n,j,-1);
						}
					j++;
				}	
			j=0;
			do{
			printf("������� 1, ����� ������� �� �����, 2-������� � ����.\n");
			scanf("%d",&l);
			}while(l!=1 && l!=2);
			if(l==1) 
				{
					printf("���-�� ���������, �������, ��� ��������: %d\n",m);
					output(arr,n);
				}
			else 
			if(l==2) 
				{
					foutput(arr,n,m);
				}
		}
	}
}while(k!=0);	
return 1;	
}

void input(int *arr,int &n)
{
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void output(int *arr,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void rand_array(int *arr,int n)
{
	int a,b;
	printf("������� ����� a:\n");
	scanf("%d",&a);
	printf("������� ����� b:\n");
	scanf("%d",&b);
	for(int i=0;i<n;i++)
		arr[i]=rand()%(b-a+1)+a;		
}
int maximum(int *a,int n)
{
	int max=a[0];
	for (int i=0;i<n;i++)
		if (a[i]>max) max=a[i];
	return max;
}
int minimum(int *a,int n)
{
	int min=a[0];
	for (int i=0;i<n;i++)
		if (a[i]<min) min=a[i];
	return min;
}
void udaleniye(int *a,int &n,int k)
{
	for(int i=k;i<n-1;i++)
		a[i]=a[i+1];
	n--;
}
int bolshemax(int *a,int n,int max)
{
	int m=0;
	for(int i=0;i<n;i++)
		if (abs(a[i])>max) m++;
	return m;
}
void mix(int *a,int n)
{
	int t;
	for(int i=0;i<n-1;i++)
		{
			if(rand()%2==1) 
				{
					t=a[i];
					a[i]=a[i+1];
					a[i+1]=t;
				}
		}
}
void vstavka(int *a,int &n,int k,int m)
{
	for(int i=n;i>k+1;i--)
		{
			a[i]=a[i-1];
		}
	a[k+1]=m;
	n++;
}
void finput(int *a,int &n)
{
	n=0;
	FILE *massiv=fopen("massiv.txt","r");
	while(!feof(massiv))
		{
			fscanf(massiv,"%d",&a[n]);
			n++;
		}	
	fclose(massiv);
}
void foutput(int *a,int n,int m)
{
	FILE *massiv=fopen("rez.txt","w");
	fprintf(massiv,"���-�� ���������, �������, ��� ��������: %d\n",m);
	for(int i=0;i<n;i++)
		fprintf(massiv,"%d ",a[i]);
	fclose(massiv);
}
