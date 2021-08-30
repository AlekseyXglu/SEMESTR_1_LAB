//Лабораторная 3 ,задание 4 повышенного уровня сложности
#include <stdio.h>
	int main()
{
	double a,a2,a4,a8,a16,a20;
	scanf("%lf",&a);
	a2=a*a;
 	a4=a2*a2;
 	a8=a4*a4;
 	a16=a8*a8;
 	a20=a16*a4;
 	printf("%.4lf , %.5lf",a4,a20);
	return 0;
} 
