/*1 Вычислить сумму ряда согласно варианту
  2 Пусть дан бесконечный ряд согласно варианту. Вычислить его приблизительную сумму, осуществляя процесс сложения до тех пор,
    пока очередное слагаемое не станет меньше заданного числа.
*/
#include <stdio.h>
#include <locale.h>
#include <math.h>
using namespace std;
void one()
{
	double x,sum=0,a=1,b=1;
	int n;
	printf("Введите x:\n");
	scanf("%lf",&x);
	printf("Введите n:\n");
	scanf("%d",&n);
	for (int i=1; i<=n; i++)
		{
			a*=x;
			b*=-1;
			sum+=b*exp(i*a);
		}
	printf("Сумма ряда равна: %.4lf\n",sum);
}

void two()
{
	double x,sum=0,i=1,a,b=1,c;
		printf("Введите x:\n");
		scanf("%lf",&x);
		printf("Введите c:\n");
		scanf("%lf",&c);
		if (pow(2,x)/cos(1)<c) printf("Первое слагамое меньше с ,сложения не будет!\n");
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
				printf("Сумма ряда равна: %.4lf\n",sum);
			}
}

int main ()
{
	int n;
	setlocale(0,"");	
	printf ("1 :Сумма ряда.\n");
  	printf ("2 :Суммирование элементов ряда,пока слагаемое меньше заданного числа.\n");
	printf ("0 :Выход из программы.\n");
			do	{		
					printf("Введите 1,2 или 0:\n");
					scanf("%d",&n);
						switch (n)
							{
								case 1: one(); break; 		
								case 2: two(); break;
							}
					if (n!=0 && n!=1 && n!=2 ) printf("Введено другое число!\n");
				}while(n!=0);
return 1;		
}	
