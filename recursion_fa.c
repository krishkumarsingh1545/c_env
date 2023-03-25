#include <stdio.h>
#include <conio.h>


int fc(int x)
{
	if (x == 1)
		return 1;
	else
		return x*fc(x-1);
}
int main(int argc, char *argv[])
{
	printf("%d", fc(4));
}