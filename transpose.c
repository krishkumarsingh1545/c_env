#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int a[3][3], i, j;
	printf("Enter any 9 elements : ");
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	for(i=0; i<3; i++)
	{
		for(j=0; j<3; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}
	getch();
}