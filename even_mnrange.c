#include <stdio.h>

int main(int argc, char *argv[])
{
	int m, n;
	printf("Enter starting range : ");
	scanf("%d", &m);
	printf("Enter ending range : ");
	scanf("%d", &n);
	if (m%2==0) {
		while (m <= n) {
			printf("%d\n", m);
			m = m + 2;
		}
	}
	else {
		m = m + 1;
		while (m <= n) {
    		printf("%d\n", m);
    		m = m + 2;
		}
	}
	return 0;
}