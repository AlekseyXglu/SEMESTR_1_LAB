#include  <stdio.h>
#include  <locale.h>
	int main()
{
	setlocale(0,"");
	int k1,k2,n;
	char a;
	printf("������� ������� �����:	");
	scanf("%c",&a);
	printf ("�������:  1:������� ������; -1:������� �������; 2:������� �� 180 ��������.\n");
	printf("������� ������� 1: ");
	scanf("%d",&k1);
	printf("������� ������� 2: ");
	scanf("%d",&k2);
 			switch (a)
				{
					case '�' : n=0; break;
					case '�' : n=1; break;
					case '�' : n=2; break;
					case '�' : n=3; break;
				}
				n= (k1+n+4) % 4;
				n= (k2+n+4) % 4;		
     		switch (n)
     			{
					case 0 : a='�'; break;
					case 1 : a='�'; break;
					case 2 : a='�'; break;
					case 3 : a='�'; break;
				}
			printf("������� ����� ����� ���������� ������:  %c",a);	
return 0;
}
