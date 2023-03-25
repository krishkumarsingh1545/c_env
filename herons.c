#include <stdio.h>
#include <math.h>
int main(int argc, char *argv[])
{
	float a, b, c, p, q, r, s, area;
	printf("Enter 1st side of the triangle : \n");
	scanf("%f", &a);
	printf("Enter 2nd side of the triangle : \n");
	scanf("%f", &b);
	printf("Enter 3rd side of the triangle : \n");
	scanf("%f", &c);
	s = (a+b+c)/2;
	p = s - a;
	q = s - b;
	r = s - c;
	area = sqrt(s*p*q*r);
	printf("The area of the traingle is : %2f\n", area);
}