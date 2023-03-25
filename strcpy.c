#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	char n[20], m[20];
	int c=0;
	printf("Enter any string : ");
	gets(n);
	while (n[c] != '\0')
	{
		m[c] = n[c];
		c++;
	}
	m[c] = '\0';
	printf("String copied to another variable :  %s", m);
	getch();
}