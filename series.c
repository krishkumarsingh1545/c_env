#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	float n, s = 0, p = 2, d = 0;
	printf("Enter range : ");
	scanf("%2f", &n);
	while (p < n) {
		s = n/p;
		p = p + 1;
		d = d + s;
	}
	printf("%2f", d);
	getch();
}