#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,""); 
	double Nkb,Nmb;
	int N,Nbit;  
	scanf("%d",&N);
	if (N<0) printf("Îøèáêà");
		else 
			{
				Nbit=N*8;
				Nkb=double(N) / 1024;
				Nmb=double(N) / 1048576;	
				printf("%lf Ìá - %lf Êá - %d Áàéò - %d Áèò",Nmb,Nkb,N,Nbit);
			}
return 0;
}
