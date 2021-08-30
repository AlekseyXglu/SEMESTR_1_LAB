//Лабораторная 3 ,задание 5 повышенного уровня сложности
#include <stdio.h>
	int main()
{
 	double a,a2,a3,a5,a10;
	scanf("%lf",&a);
	a2=a*a;
 	a3=a2*a;
 	a5=a2*a3;
 	a10=a5*a5;
 	printf("%.3lf, %.3lf",a3,a10);
	return 0;
} 
