#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	int n, n1, d = 0, s = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 =n;
	while (n != 0) {
		d = n%10;
		s = s+d;
		n = n/10;
	}
	if (n1%s == 0) {
		printf("%d is niven number",  n1);
	}
	else {
		printf("%d is not niven number", n1);
	}
	getch();
}