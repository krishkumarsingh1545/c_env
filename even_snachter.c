#include <stdio.h>

int main(int argc, char *argv[])
{
	int n, s = 0, d = 0, m = 1, x, y;
	printf("Enter number : ");
	scanf("%d", &n);
	while (n != 0)
	{
	    d = n%10;
	    if (d%2 == 0) {
	     }   x = d+1;
	        y = x*m;
	        s = s+y;
	        m= m*10;
	    }
	    n =n/10;
	}
	printf("%d", s);
    return 0;
}