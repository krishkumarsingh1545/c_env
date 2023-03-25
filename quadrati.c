#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int a, b, c, d;
	printf("Enter a, b, c of a quadratic equation.  : ");
	scanf("%d %d %d", &a, &b, &c);
	d = b*b - 4*a*c;
	if (d>0) {
		printf("Roots are real and equal. ");
	}
	else if (d<0) {
		printf("Roots are imaginary");
	}
	else {
		printf("Roots are real");
	}
	getch();
}