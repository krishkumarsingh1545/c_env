#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int a[3][3], i, j, s=0;
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
			if (i==j)
			s = s + a[i][j];
		}
		printf("\n");
	}
	printf("Trace : %d", s);
	getch();
}