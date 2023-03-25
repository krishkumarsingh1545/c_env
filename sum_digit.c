#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	int n, s = 0, d = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	while (n != 0) {
		d = n%10;
		s = s+d;
		n = n/10;
	}
	printf("Sum = %d", s);
	getch();
}