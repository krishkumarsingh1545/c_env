#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, s = 10, d = 0;
	printf("Enter number ; ");
	scanf("%d", &n);
	while (n != 0)
	{
	    d = n % 10;
	    if (d < s)
	    {
	        s = d;
	    }
	    n = n/10;
	}
	printf("The smallest digit is %d", s);
	getch();
}etch();
}