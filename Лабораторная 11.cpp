/*1 ��������� ����� ���� �������� ��������
  2 ����� ��� ����������� ��� �������� ��������. ��������� ��� ��������������� �����, ����������� ������� �������� �� ��� ���,
    ���� ��������� ��������� �� ������ ������ ��������� �����.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
using namespace std;
void one()
{
	double x,sum=0,a=1,b=1;
	int n;
	printf("������� x:\n");
	scanf("%lf",&x);
	printf("������� n:\n");
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
		{
			a*=x;
			b*=-1;
			sum+=b*exp(i*a);
		}
	printf("����� ���� �����: %.4lf\n",sum);
}

void two()
{
	double x,sum=0,i=1,a,b=1,c;
		printf("������� x:\n");
		scanf("%lf",&x);
		printf("������� c:\n");
		scanf("%lf",&c);
		if (pow(2,x)/cos(1)<c) printf("������ �������� ������ � ,�������� �� �����!\n");
		else 
			{
				a=x;
				while (pow(2,a)/(i*i*cos(b))>=c)
					{	
						sum+=pow(2,a)/(i*i*cos(b));
						a*=x;
						b*=i+1;
						i++;
					}
				printf("����� ���� �����: %.4lf\n",sum);
			}
}

int main ()
{
	int n;
	setlocale(0,"");	
	printf ("1 :����� ����.\n");
  	printf ("2 :������������ ��������� ����,���� ��������� ������ ��������� �����.\n");
	printf ("0 :����� �� ���������.\n");
			do	{		
					printf("������� 1,2 ��� 0:\n");
					scanf("%d",&n);
						switch (n)
							{
								case 1: one(); break; 		
								case 2: two(); break;
							}
					if (n!=0 && n!=1 && n!=2 ) printf("������� ������ �����!\n");
				}while(n!=0);
return 1;		
}	
