#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int a, r, i, s=0;
	printf("Enter range : ");
	scanf("%d", &r);
	int n[r];
	for (i = 0; i<r; i++)
	{
		printf("Enter numbers : ");
		scanf("%d", &n[i]);
	}
	for (i = 0; i<r; i++)
	{
		if (n[i]%2 != 0)
		{
			s = s + n[i];
		}
	}
	printf("The sum of odd inputs : %d", s);
	getch();
}