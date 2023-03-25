#include <stdio.h>

int main() {
	int c = 2, n;
	printf("Range of even numbers : ");
	scanf("%d", &n);
	while (c <= n) {
		printf("%d\n", c);
		c = c + 2;
	}
	return 0;
}