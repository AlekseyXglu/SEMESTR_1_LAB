#include  <stdio.h>
#include  <locale.h>
	int maxd (int a);
	int main()
{
	setlocale(0,"");
	int den,mes,d,m;
	printf("������� ����: ");
	scanf("%d",&den);
	printf("������� �����: ");
	scanf("%d",&mes);
	if ((den<=0 || den>=32 || mes<=0 || mes>=13) || (mes==2 && den>=29) || ((mes==4 || mes==6 || mes==9 || mes==11) && den==31))
		printf("��� ����� ����!");
	else
		{
			d=den; m=mes;
			if (den<=maxd(mes) && den>=2)                 //������� 1
				 den--;
			else 
				{				    
					den=maxd(mes-1);
				   	mes--;
				}				
			printf("���������� ���� %d:%d\n" ,den,mes);		 
	    
	    	if (d>=1 && d<maxd(m))              	      //������� 2
	    		d++;
			else 
				{
					d=1;
					m++;
				}
			printf("��������� ���� %d:%d",d,m);
		}
return 0;
}

	int maxd (int a)
{
	int n;
	switch(a) 
		{
			case 1: n=31; break;
			case 2: n=28; break;
			case 3: n=31; break;
			case 4: n=30; break;
			case 5: n=31; break;
			case 6: n=30; break;
			case 7: n=31; break;
			case 8: n=31; break;
			case 9: n=30; break;
			case 10: n=31; break;
			case 11: n=30; break;
			case 12: n=31; break;	
		}
	return n;

	
