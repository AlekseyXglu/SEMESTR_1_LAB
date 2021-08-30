#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int a,b,c,d,e,p,s;
	scanf("%d",&a);
	if (a<0) a=a*(-1);
 	if (a>=10000000 && a<100000000)
		{
			b= a % 10;
			c= (a % 1000)/100;
			d= (a % 100000) /10000;
			e= (a/1000000)%10;
			p= b*c*d*e;
			s= a-p;
			printf("%d",s);
		}
	else printf("Число не восьмизначное!");		
return 0;	
}
