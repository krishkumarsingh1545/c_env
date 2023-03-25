#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, i, a=0, b=1, k=0;
	printf("Enter range : ");
	scanf("%d", &n);
	for(i=0; i<n; i++)
	{
		if (i==0 || i==1)
		printf("%d\n", a);
		k=a+b;
		printf("%d\n", k);
		a=b;
		b=k;
	}
	getch();
}