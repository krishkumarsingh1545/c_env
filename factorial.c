#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, i = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (i <= n) 
	{
		i = i + 1;
		if (n % i == 0)
		{
			printf("%d\n", i);
		}
	}
	getch();
}}
}