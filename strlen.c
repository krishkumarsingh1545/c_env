#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	char a[20], c;
	int k=0;
	printf("Enter any string value : ");
	gets(a);
	while (c != '\0')
	{
		c = a[k];
		k++;
	}
	printf("Length of string : %d", k-1);
	getch();
}