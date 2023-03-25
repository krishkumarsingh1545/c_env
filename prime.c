#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	int i, c, n;
	i = 0;
	c = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (i < n)
	{
		i = i + 1;
		if (n % i == 0)
		{
			c = c + 1;
		}
	}
		if (c == 2)
		{
			printf("%d is a prime number.", n);
		}
		else {
			printf("%d is not a prime number.", n);
		}
		getch();
}