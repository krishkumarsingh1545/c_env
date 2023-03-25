#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	int n, d = 0, s = 0,  p;
	printf("Enter any number : ");
	scanf("%d", &n);
	p = n*n;
	while (p != 0) {
		d = p%10;
		s = s+d;
		p= p/10;
	}
	if (s == n) {
		printf("%d is neon number",  n);
	}
	else {
		printf("%d is not neon number", n);
	}
	getch();
}