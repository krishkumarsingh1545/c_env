#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int i=0, j=0, k=0;
	for(i=0; i<5; i++)
	{
		for(j=0; j<i; j++)
		{
			printf(" ");
		}
		for(k=0;k<5-i;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}