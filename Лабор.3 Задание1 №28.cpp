//Лабор.3 Задание 1 №28
#include <stdio.h>
#include <locale.h>
using namespace std;
	int main() 
{
	setlocale(0,"");
	double s,b,c;
	int a,e;
	printf("Введите количество человек: ");
	scanf("%d",&a); 	
	printf("Стоимость билета в одну сторону: ");
	scanf("%lf",&b); 	
	printf("Стоимость проживания за день: ");
	scanf("%lf",&c); 	
	printf("Количество дней отдыха: ");
	scanf("%d",&e); 	
	if (a<=0 || b<=0 || c<=0 || e<=0)
		printf("Ошибка!");
	else 
		{		
	        s=a*(2*b+c*e); //Подсчёт стоимости
	    	printf("Цена летнего отдыха для %d человек = %.2lf ",e,s);
		}
return 0;
}
