#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, d = 0, k = 1, n1;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n;
	while (n != 0) {
		d = n%10;
		if (d == 0) {
			k = d;
		}
		n = n/10;
	}
	if (k == 0) {
		printf("%d is duck number", n1);
	}
	else {
		printf("%d is not duck number",  n1);
	}
	getch();
}