#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	double a,b,c;
	printf("Первая сторона: ");
	scanf("%lf",&a);
	printf("Вторая сторона: ");
	scanf("%lf",&b);
	printf("Третья сторона: ");
	scanf("%lf",&c);
	if (a+b<c || b+c<a || a+c<b || a<=0 || b<=0 || c<=0)
		printf("Такого треугольника не существует!");
	else
			{
			 	if (a==b==c) 
					printf("Треугольник равносторонний!\n");
				else
					if (a==b || b==c || a==c) 
						printf("Треугольник равнобедренный!\n");
						if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
							printf("Треугольник прямоугольный!\n");
						else printf("Треугольник не прямоугольный!\n");	
	    	}
	return 0;
}
