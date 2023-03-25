#include  <stdio.h>

int main(int argc, char *argv[])
{
	int c = 1, s = 0, n;
	scanf("%d", &n);
	while (c <= n) {
	    s = s + c*c;
	    c = c + 1;
	}
	printf("%d", s);
	return 0;
}