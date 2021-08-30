#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int n,k,q;
	printf("Номер дня недели для первого января: ");
	scanf("%d",&n);
	printf("Номер дня в году: ");
	scanf("%d",&k);
	if (n<0 || n>6 || k<0 || k>365)
		printf("Ошибка!");
	else
		{
			q=(n + (k-1)%7) % 7;
			printf("Номер дня недели %d-го дня: %d",k,q);
	    }
	return 0;
}
