#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int m,n,k,p,q,r,m1,n1,k1,s;
	printf("������� ���� �����? ");
	scanf("%d",&m);
	printf("������� ���� �����? ");
	scanf("%d",&n);
	printf("������� ���� ������? ");
	scanf("%d",&k);
	printf("������� ������ �����? ");
	scanf("%d",&p);
	printf("������� ������ �����? ");
	scanf("%d",&q);
	printf("������� ������ ������? ");
	scanf("%d",&r);
	if (m<0 || m>23 || n<0 || n>59 || k<0 || k>59)
		printf("������!");
			else		
				{
					s=3600*m+60*n+k+3600*p+60*q+r;
					m1=(s/3600)%24;
					n1=(s%3600)/60;
					k1=(s%3600)%60;
					printf("������ %d:%d:%d",m1,n1,k1);
				}
	return 0;
}
