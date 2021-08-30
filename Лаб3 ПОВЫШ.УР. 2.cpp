//Лабораторная 3 ,задание 2 повышенного уровня сложности
#include <stdio.h>
using namespace std;
	int main()
{
 	double a,a2,a4,a8,a12,a13;
 	scanf("%lf",&a);
 	a2=a*a;
 	a4=a2*a2;
 	a8=a4*a4;
 	a12=a8*a4;
 	a13=a12*a;
 	printf("%lf",a13);
	return 0;
} 
