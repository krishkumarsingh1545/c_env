#include <stdio.h>
#include <conio.h>


//Declaring history's' location
struct hist
{
	int f1, f2;
	float s;
	char op;
};

// Function for finding Sum
int sum(int a, int b)
{
    int sm = a + b;
    return sm;
}

// Function for finding Difference
int sub(int c, int d)
{
    int sb = c - d;
    return sb;
}

// Function of finding Product
int mul(int e, int f)
{
    int ml = e * f;
    return ml;
}

// Function for finding Quotient
float div(float g, float h)
{
    float dv = g / h;
    return dv;
}

// Main function for calculator
int main()
{
    // declaration of all the variables
    struct hist h[10];
    int x, y, o, i=2, p=0, z=0, m;
    
    // Inputs for the calculation
    while (i == 1 || i == 2)
    {
        if (i == 1)
        {
        	printf("-------------------------------\n");
        	printf("Previous number : %d\n", p);
        }
        printf("-------------------------------\n");
        printf("1. Addition\n");
        printf("2. Substraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("-------------------------------\n");
        printf("Enter option : ");
        scanf("%d", &o);
        printf("-------------------------------\n");
        if (p == 0 || i == 2)
        {
            printf("\n\nEnter any two numbers : ");
            scanf("%d%d", &x, &y);
            printf("-------------------------------\n");
        }
        else
        {
            printf("Enter second number : ");
            x = p;
            scanf("%d", &y);
            printf("-------------------------------\n");
        }
        
        // Main calculating
        if (o == 1)
        {
            p = sum(x, y);	//Addition of two numbers
            printf("Sum : %d\n", p);
        }
        else if (o == 2)
        {
            p = sub(x, y);	//Substraction of two numbers
            printf("Difference : %d\n", p);
        }
        else if (o == 3)
        {
            p =  mul(x, y);	//Multiplication of two numbers
            printf("Product : %d\n", p);
        }
        else if (o == 4)
        {
            float p =  div(x, y);	// Division of two numbers
            printf("Quotient : %.4f\n", p);
        }
        else
        {
            printf("Wrong input, try again\n");	//Error
            getch();
            clrscr();
            continue;
        }
        
        // Storing history
        if (z<11)
        {
	        h[z].f1 = x;
	        h[z].f2 = y;
	        h[z].s = p;
	        if (o == 1)
	        {
	        	h[z].op = '+';
	        }
	        else if (o == 2)
	        {
	        	h[z].op = '-';
	        }
	        else if (o == 3)
	        {
	        	h[z].op = '*';
	        }
	        else if (o == 4)
	        {
	        	h[z].op = '/';
	        }
        }
        z++;
        do
        {
	        // Process for Next Calculation
	        printf("\n\n-------------------------------\n");
	        printf("Further calculation - Press 1\n");
	        printf("New calculation - Press 2\n");
	        printf("History - Press 3\n");
	        printf("Exit - Press any key.\n");
	        printf("-------------------------------\n");
	        printf("\nEnter an option : ");
	        scanf("%d", &i);
	        
	        //Printing the history
	        if (i == 3)
	        {
	        	clrscr();
	        	printf("\n\n History : \n");
	        	for(m=0; m<z; m++)
	        	{
	        		printf("-------------------------------\n");
	        		printf("%d %c %d = %.2f\n", h[m].f1, h[m].op, h[m].f2, h[m].s);
	        	}
	        		printf("-------------------------------\n");
	        }
	        else
	        {
	        	clrscr();
	        }
        } while (i == 3);
    }
    return 0;
}