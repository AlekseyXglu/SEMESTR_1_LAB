#include <stdio.h>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(0,"");
	int c,d;
	printf("Введите день: ");
	scanf("%d",&c);
	printf("Введите месяц: ");
	scanf("%d",&d);
	if ((c<=0 || c>=32 || d<=0 || d>=13) || (d==2 && c>29) || ((d==4 || d==6 || d==9 || d==11) && c==31))
	printf("Нет такой даты!");
	else
		{
				switch(c)
						{
							case 1: printf("Первое"); break;
							case 2: printf("Второе"); break;
							case 3: printf("Третье"); break;
							case 4: printf("Четвёртое"); break;
							case 5: printf("Пятое"); break;
							case 6: printf("Шестое"); break;
							case 7: printf("Седьмое"); break;
							case 8: printf("Восьмое"); break;
							case 9: printf("Девятое"); break;
							case 10: printf("Десятое"); break;
							case 11: printf("Одиннадцатое"); break;
							case 12: printf("Двенадцатое"); break;
							case 13: printf("Тринадцаое"); break;
							case 14: printf("Четырнадцатое"); break;
							case 15: printf("Пятнадцатое"); break;
							case 16: printf("Шестнадцатое"); break;
							case 17: printf("Семнадцатое"); break;
							case 18: printf("Восемнадцатое"); break;
							case 19: printf("Двадцатое"); break;
							case 20: printf("Двадцать первое");break;
							case 21: printf("Двадцать первое"); break;
							case 22: printf("Двадцать второе"); break;
							case 23: printf("Двадцать третье"); break;
							case 24: printf("Двадцать четвёртое"); break;
							case 25: printf("Двадцать пятое"); break;
							case 26: printf("Двадцать шестое"); break;
							case 27: printf("Двадцать седьмое"); break;
							case 28: printf("Двадцать восьмое"); break;
							case 29: printf("Двадцать девятое"); break;
							case 30: printf("Тридцатое");break;
							case 31: printf("Тридцать первое"); break;
						}
				switch (d)
						{
							case 1: printf(" Января"); break;
							case 2: printf(" Февраля"); break;
							case 3: printf(" Марта"); break;
							case 4: printf(" Апреля"); break; 
							case 5: printf(" Мая"); break;
							case 6: printf(" Июня"); break; 	
							case 7: printf(" Июля"); break;
							case 8: printf(" Августа"); break;
							case 9: printf(" Сентября"); break;	
							case 10: printf(" Октября"); break;
							case 11: printf(" Ноября"); break;	
							case 12: printf(" Декабря"); break;	
						}			
		}
return 0;	
}	
	
