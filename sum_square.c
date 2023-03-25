#include <stdio.h>

int main(int argc, char *argv[])
{
	int sum, k, n, c = 1;
	printf("Range of adding squares of numbers : ");
	scanf("%d", &n);
	k = n+1;
	sum = (n * k * (k+n))/6;
	printf("The sum of square of %d numbers is %d", n, sum);
	return 0;
}