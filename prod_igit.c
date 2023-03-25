#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, s = 1, d = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (n != 0) {
		d = n%10;
		if (d % 2 == 0) {
			s = (d+1)*s;
		}
		n = n/10;
	}
	printf("%d", s);
	getch();
}