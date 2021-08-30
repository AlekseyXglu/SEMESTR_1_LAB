#include <stdio.h>
#include <math.h>
#include <locale.h>
	int main()
{
	setlocale(0,"");
	double x,y;
	printf("¬ведите x: ");
	scanf("%lf",&x);
	if (x<=0) y=abs(x);
		 	else
				if (x<=1) y=(x*x*x+1)/(2*x+3);
						else y=5*log(x+3);
	printf("y= %lf",y);
return 0;
}
