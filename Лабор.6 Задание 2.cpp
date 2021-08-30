#include <stdio.h>
#include <locale.h>
	int k=0;
	double vol(int f);
	int main()
{
	setlocale(0,"");
	double max;
	int n=1,a,b,c,d,e;
	a=vol(1);
	b=vol(2);
	c=vol(3);
	d=vol(4);
	e=vol(5); 
		max=a;
		if (b>max) 
			{
				max=b;
				n=2;			
			}
		if (c>max) 
			{
				max=c;			
				n=3;
			}
		if (d>max) 
			{
				max=d;
				n=4;
			}
		if (e>max) 
			{
				max=e;
				n=5;
			}
		if (k==1) printf ("Ошибка!");	
			else printf("Номер параллелепипеда с наибольшим объёмом: %d",n);
return 0;
}
double vol(int f)
{
	double a,b,c;
	printf("Введите рёбра %d-го параллелепипеда:  ",f);
	scanf("%lf",&a);
	scanf("%lf",&b);
	scanf("%lf",&c);
	if (a<=0 || b<=0 || c<=0) k=1; 
return a*b*c;
}
