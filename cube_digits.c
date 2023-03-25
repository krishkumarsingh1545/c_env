#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[])
{
	int n, d=0, s=0;
	printf("Enter number : ");
	scanf("%d", &n);
	while (n != 0)
	{
	    d = n%10;
	    s = s + pow(d,3);
	    n = n/10;
	}
	printf("The cube of digits of number is %d", s);
	return 0;
}n 0;
}