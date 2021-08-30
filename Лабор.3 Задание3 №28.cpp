//Лабор. Задание 3 №28
#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	double x,y,z;
	printf("Введите x: "); //Ввод x
	scanf("%lf",&x);
	printf("Введите y: "); //Ввод y
	scanf("%lf",&y);
	if (x!=0 && y!=0) 
	{
		z=abs(-3*x-5)/(-x*x*y);
		printf("Значение выражения равно %.2lf",z);
	}
	else printf("Ошибка!");
return 0;
}
