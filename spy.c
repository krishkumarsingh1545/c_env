#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, d = 0, s = 0, k = 1, n1;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n;
	while (n != 0) {
		d = n%10;
		s = s+d;
		k = k*d;
		n = n/10;
	}
	if (s == k) {
		printf("%d is spy number",  n1);
	}
	else {
		printf("%d is not spy number",  n1);
	}
	getch();
}