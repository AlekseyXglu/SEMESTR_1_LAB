//Лабор.3 Задание 2,№28
#include <stdio.h>
#include <math.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	const double PI = 3.141592653589793;
	double a,b,c;
	float alf,bet,gam;
	printf("Введите угол betta : "); //Угол в градусах
	scanf("%f",&bet);
	printf("Введите угол gamma : "); //Угол в градусах
	scanf("%f",&gam);
	printf("Введите сторону a : ");  //Угол в градусах
	scanf("%lf",&a);
	if (a<=0 || gam<=0 || gam>=180 || bet<=0 || bet>=180) 
		   printf("Неверные значения");
		else
		{
			alf=180-bet-gam;  //Подсчёт третьего угла
			printf("Третий угол равен: %.2f ",alf);	
			b=(a*sin((bet*PI)/180))/sin((alf*PI)/180); //Подсчёт второй стороны, аргумент синуса в радианах
			printf("Вторая сторона равна: %.2lf ",b);
			c=(a*sin((gam*PI)/180))/sin((alf*PI)/180); //Подсчёт третьей стороны, аргумент синуса в радианах
			printf("Третья сторона равна: %.2lf",c);		
		}
return 0;
}
