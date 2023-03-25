#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, d = 0, s1 = 0, s2 = 0, n1;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n;
	while (n != 0) {
		d = n%10;
		if (d%2 == 0) {
			s1 = s1 + d;
		}
		else {
			s2 = s2 + d;
		}
		n = n/10;
	}
	printf("Sum of even digits of %d is %d\n", n1, s1);
	printf("Sum of odd digits of %d is %d\n", n1, s2);
	getch();
}