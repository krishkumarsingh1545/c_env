#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, s, i;
	i = 0;
	s = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (i < n)
	{
		if (n % i == 0)
		{
			s = s + i;
		}
		i = i + 1;
	}
	if (s == n)
	{
		printf("%d is a perfect number.", n);
	}
	if (s != n) {
		printf("%d is not a perfect number.", n);
	}
	getch();
}