//�����.3 ������� 1 �28
#include <stdio.h>
#include <locale.h>
using namespace std;
	int main() 
{
	setlocale(0,"");
	double s,b,c;
	int a,e;
	printf("������� ���������� �������: ");
	scanf("%d",&a); 	
	printf("��������� ������ � ���� �������: ");
	scanf("%lf",&b); 	
	printf("��������� ���������� �� ����: ");
	scanf("%lf",&c); 	
	printf("���������� ���� ������: ");
	scanf("%d",&e); 	
	if (a<=0 || b<=0 || c<=0 || e<=0)
		printf("������!");
	else 
		{		
	        s=a*(2*b+c*e); //������� ���������
	    	printf("���� ������� ������ ��� %d ������� = %.2lf ",e,s);
		}
return 0;
}
