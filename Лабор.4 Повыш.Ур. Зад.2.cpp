/*360 гр-3600 с		360 гр-12*3600 с
  1	гр - 10 с		1 гр - 120 с
  0,1 гр - 1 с		1/120 гр - 1 с
  t=10*betta		t=120*alfa
*/
#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int a,b,t,t1,t2;
	printf("Угол для часовой стрелки: ");
	scanf("%d",&a);
	if (a<0)
		printf("Ошибка!");
	else
	{
		t=120*a;
		b=(12*a) % 360; 
		t1=t/3600;
		t2=(t%3600)/60;
		printf("Угол для минутной стрелки: %d ", b);
		printf("Количество часов : %d ", t1);
		printf("Количество полных минут: %d ",t2);
	}
return 0;
}

