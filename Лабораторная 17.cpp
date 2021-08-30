#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define N 100
#define M 100
struct ARR
{
	double a[N][M];
	int n,m;
};
void input(ARR &mas)
{
	int n;
	printf("¬ведите кол-во строк и столбцов двумерного массива:\n");
	do{
	scanf("%d",&mas.n);
	scanf("%d",&mas.m);
	if(mas.n!=mas.m || mas.n<0 || mas.m<0 || mas.n>100 || mas.m>100) printf("ќшибка!\n");
	}while(mas.n!=mas.m || mas.n<0 || mas.m<0 || mas.n>100 || mas.m>100);
	printf("¬вод массива:\n");
	for(int i=0;i<mas.n;i++)
		for(int j=0;j<mas.m;j++)
		{
			scanf("%lf",&mas.a[i][j]);
		}
}
void finput(ARR &mas)
{
	do{
	printf("¬ведите кол-во строк и столбцов двумерного массива:\n");
	scanf("%d",&mas.n);
	scanf("%d",&mas.m);
	}while(mas.n!=mas.m || mas.n<0 || mas.m<0 || mas.n>100 || mas.m>100);
	FILE *f=fopen("massiv.txt","r");
	while(!feof(f))
		{
			for(int i=0;i<mas.n;i++)
			{
				for(int j=0;j<mas.m;j++)
					{
						fscanf(f,"%lf",&mas.a[i][j]);
					}
			}
		}
	fclose(f);
}
void random(ARR &mas)
{
	int a,b;
	printf("¬ведите кол-во строк и столбцов двумерного массива:\n");
	do{
	scanf("%d",&mas.n);
	scanf("%d",&mas.m);
	}while(mas.n!=mas.m || mas.n<0 || mas.m<0 || mas.n>100 || mas.m>100);
	printf("¬ведите границы:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	for(int i=0;i<mas.n;i++)
		for(int j=0;j<mas.m;j++)
			{
				mas.a[i][j]=(rand()%(100*b-100*a+1)+100*a)/100.0;
			}
}
void formula(ARR &mas)
{
	printf("¬ведите кол-во строк и столбцов двумерного массива:\n");
	do{
	scanf("%d",&mas.n);
	scanf("%d",&mas.m);
	}while(mas.n!=mas.m || mas.n<0 || mas.m<0 || mas.n>100 || mas.m>100);
	for(int i=0;i<mas.n;i++)
		for(int j=0;j<mas.m;j++)
			{
				if(i>j) mas.a[i][j]=sin(i+j);
				else 
				{
					if(i==j) mas.a[i][j]=2;
					else
					if (i<j) mas.a[i][j]=asin((i+j)/(2.0*i+3.0*j));
				}
			}
}
void output(ARR mas)
{
	for(int i=0;i<mas.n;i++)
		{
			for(int j=0;j<mas.m;j++)
				{
					printf("%7.2lf ",mas.a[i][j]);
				}
		printf("\n");
		}
	printf("\n");
}
void foutput(ARR mas)
{
	FILE *f=fopen("rez.txt","w");
	for(int i=0;i<mas.n;i++)
		{
			for(int j=0;j<mas.m;j++)
				{
					fprintf(f,"%7.2lf ",mas.a[i][j]);
				}
		fprintf(f,"\n");
		}
	fprintf(f,"\n");
}
void minim(ARR mas,int &t)
{
	double min=mas.a[1][0];
	for(int i=1;i<mas.n;i++)
		for(int j=0;j<i;j++)
			if(mas.a[i][j]<min) 
				{
					min=mas.a[i][j];
					t=j;
				}
}
void maksotr(ARR mas,int &d,int &k)
{
	double max=mas.a[1][0];
	for(int i=1;i<mas.n;i++)
		for(int j=0;j<i;j++)
			if(mas.a[i][j]>max && mas.a[i][j]<0) 
				{
					max=mas.a[i][j];
					d=j;
					k=1;
				}	
}
void smenastolb(ARR &mas,int t,int d)
{
	double w;
	for(int i=0;i<mas.m;i++)
		{
			w=mas.a[i][t];
			mas.a[i][t]=mas.a[i][d];
			mas.a[i][d]=w;
		}
}
void udaleniye(ARR &mas,int a)
{
	for(int i=a-1;i<mas.n-1;i++)
		for(int j=0;j<mas.m;j++)
			{
				mas.a[i][j]=mas.a[i+1][j];
			}
	mas.n--;
}

int main()
{
	setlocale(0,"");
	int n,t=0,d=0,k=0,a,l;
	ARR mas;
do{
	do{
	printf("¬ведите 1-ввод с клавиатуры,2-из файла,3-рандом,4-по формуле,0-выход.\n");
	scanf("%d",&n);
	}while(n!=1 && n!=2 && n!=3 && n!=4 && n!=0);
	if(n!=0)
		{
			switch(n)
				{
					case 1: input(mas);break;
					case 2: finput(mas);break;
					case 3: random(mas);break;
					case 4:	formula(mas);break;	
				}		
			output(mas);
			minim(mas,t);
			maksotr(mas,d,k);
			if(k==1)
				smenastolb(mas,t,d);
			output(mas);
			printf("¬ведите строку, которую нужно удалить:\n");
			do{
			scanf("%d",&a);
			}while(a<=0 && a>mas.n);
			udaleniye(mas,a);
			
		do{
		printf("¬ведите: 1-вывести на экран,2-в файл:\n");
		scanf("%d",&l);
		}while(l!=1 && l!=2);	
		if(l==1) output(mas);
		else foutput(mas);
		}
}while(n!=0);
return 0;
}
