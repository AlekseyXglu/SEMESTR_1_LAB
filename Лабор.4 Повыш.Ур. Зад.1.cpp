#include <stdio.h>
#include <locale.h>
using namespace std;
	int main()
{
	setlocale(0,"");
	int n,k,q;
	printf("����� ��� ������ ��� ������� ������: ");
	scanf("%d",&n);
	printf("����� ��� � ����: ");
	scanf("%d",&k);
	if (n<0 || n>6 || k<0 || k>365)
		printf("������!");
	else
		{
			q=(n + (k-1)%7) % 7;
			printf("����� ��� ������ %d-�� ���: %d",k,q);
	    }
	return 0;
}
