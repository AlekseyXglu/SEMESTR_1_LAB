#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	double a,b,c;
	printf("������ �������: ");
	scanf("%lf",&a);
	printf("������ �������: ");
	scanf("%lf",&b);
	printf("������ �������: ");
	scanf("%lf",&c);
	if (a+b<c || b+c<a || a+c<b || a<=0 || b<=0 || c<=0)
		printf("������ ������������ �� ����������!");
	else
			{
			 	if (a==b==c) 
					printf("����������� ��������������!\n");
				else
					if (a==b || b==c || a==c) 
						printf("����������� ��������������!\n");
						if (a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b)
							printf("����������� �������������!\n");
						else printf("����������� �� �������������!\n");	
	    	}
	return 0;
}
