#include  <stdio.h>
#include  <locale.h>
	int main()
{
	setlocale(0,"");
	int k1,k2,n;
	char a;
	printf("Введите сторону света:	");
	scanf("%c",&a);
	printf ("Команды:  1:Поворот налево; -1:Поворот направо; 2:Поворот на 180 градусов.\n");
	printf("Введите команду 1: ");
	scanf("%d",&k1);
	printf("Введите команду 2: ");
	scanf("%d",&k2);
 			switch (a)
				{
					case 'С' : n=0; break;
					case 'З' : n=1; break;
					case 'Ю' : n=2; break;
					case 'В' : n=3; break;
				}
				n= (k1+n+4) % 4;
				n= (k2+n+4) % 4;		
     		switch (n)
     			{
					case 0 : a='С'; break;
					case 1 : a='З'; break;
					case 2 : a='Ю'; break;
					case 3 : a='В'; break;
				}
			printf("Сторона света после выполнения команд:  %c",a);	
return 0;
}
