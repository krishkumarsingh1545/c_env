#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, m, i = 0, p = 1;
	printf("Enter any two numbers : ");
	scanf("%d %d", &n, &m);
	while (i <= n) 
	{
		i = i + 1;
		if (n%i == 0 && m%i == 0)
		{
			p = i;
		}
	}
	printf("%d", p);
	getch();
}