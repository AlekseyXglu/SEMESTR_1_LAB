//�����.3 ������� 2,�28
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
	printf("������� ���� betta : "); //���� � ��������
	scanf("%f",&bet);
	printf("������� ���� gamma : "); //���� � ��������
	scanf("%f",&gam);
	printf("������� ������� a : ");  //���� � ��������
	scanf("%lf",&a);
	if (a<=0 || gam<=0 || gam>=180 || bet<=0 || bet>=180) 
		   printf("�������� ��������");
		else
		{
			alf=180-bet-gam;  //������� �������� ����
			printf("������ ���� �����: %.2f ",alf);	
			b=(a*sin((bet*PI)/180))/sin((alf*PI)/180); //������� ������ �������, �������� ������ � ��������
			printf("������ ������� �����: %.2lf ",b);
			c=(a*sin((gam*PI)/180))/sin((alf*PI)/180); //������� ������� �������, �������� ������ � ��������
			printf("������ ������� �����: %.2lf",c);		
		}
return 0;
}
