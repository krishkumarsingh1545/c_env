#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, n1, s = 0, d = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n;
	while (n != 0) {
		d = n%10;
		s = s * 10 + d;
		n = n/10;
	}
	printf("The reversed of %d is %d", n1, s); 
}