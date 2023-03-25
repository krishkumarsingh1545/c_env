#include <stdio.h>
#include <conio.h> 

int main(int argc, char *argv[])
{
	int n, d = 0, s = 0,  n1, m = 1;
	printf("Enter any number : ");
	scanf("%d", &n);
	n1 = n*n;
	while (s < n) {
		d = n1%10;
		s = d*m + s;
		m = m*10;
		n1 = n1/10;
	}
	if (s == n) {
		printf("%d is automorphic number",  n);
	}
	else {
		printf("%d is not automorphic number", n);
	}
	getch();
}