#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int i, c = 0, s = 0, d = 0, n, k = 0, n1;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			c++;
		}
	}
	if (c == 2)
	{
		printf("%d is a prime number.", n);
	}
	else
	{
		printf("%d is not a prime number.", n);
	}
	while (n != 0)
	{
		d = n % 10;
		s = s * 10 + d;
		n = n / 10;
	}
	for (i = 1; i <= s; i++)
	{
		if (s % i == 0)
		{
			k++;
		}
	}
	if (k == 2)
	{
		printf("%d is a twisted prime number.", s);
	}
	getch();
}