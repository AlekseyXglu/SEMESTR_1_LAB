#include <stdio.h>
#include <locale.h>
using namespace std;
	int main() 
{
	setlocale(0,"");
	double x,y;
	printf("Введите x: ");
	scanf("%lf",&x);
	printf("Введите y: ");
	scanf("%lf",&y);
				if ( x>=-4  &&  x<=0  && y>=0 && y<= x*7.0/4 + 7  &&  y>=6*x+6  &&  (x+2)*(x+2)+(y-1)*(y-1)>=1 )
					printf("Принадлежит области !");
				else 
					{
						if ( x>0  &&  x<=1  &&  y>=-5*x+6  &&  x*x+y*y<=49 ) 
							printf("Принадлежит области !");
						else
							{
								if ( x>1  &&  x<=3  &&  y>=0.5*x+0.5  &&  x*x+y*y<=49 )
									printf("Принадлежит области !");
								else 
						 			{
									 	if ( x>3  &&  x<=6  &&  y>=4-x*2.0/3  &&  x*x+y*y<=49 )
											printf("Принадлежит области !");
										else 
		 									{
											 	if ( x>6  &&  x<=7 &&  y>=0  &&  x*x+y*y<=49 )
													printf("Принадлежит области !");
												else 	
														printf("Не принадлежит области!");
											}		
									}	
							}
					}					
return 0;	
}
