#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int a[3][3], b[3][3], c[3][3], i, j;
	printf("Enter 9 elements for 1st matrix : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter 9 elements for 2nd matrix : \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &b[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
	getch();
}