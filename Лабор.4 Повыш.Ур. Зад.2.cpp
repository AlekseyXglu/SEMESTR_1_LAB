/*360 ��-3600 �		360 ��-12*3600 �
  1	�� - 10 �		1 �� - 120 �
  0,1 �� - 1 �		1/120 �� - 1 �
  t=10*betta		t=120*alfa
*/
#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int a,b,t,t1,t2;
	printf("���� ��� ������� �������: ");
	scanf("%d",&a);
	if (a<0)
		printf("������!");
	else
	{
		t=120*a;
		b=(12*a) % 360; 
		t1=t/3600;
		t2=(t%3600)/60;
		printf("���� ��� �������� �������: %d ", b);
		printf("���������� ����� : %d ", t1);
		printf("���������� ������ �����: %d ",t2);
	}
return 0;
}

