#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[])
{
	int n, m, i = 0, k = 0;
	printf("Enter any number : ");
	scanf("%d", &n);
	for (m = n; m != 0; m--)
	{
		i = m-1;
		if (n % m == 0 && n%i == 0)
		{
				k = 1;
		}
	}
	if (k == 1)
	{
		printf("%d is a pronoic number", n);
	}
	else
	{
		printf("%d is not a pronoic number", n);
	}
	getch();
}c number", n);
	}
	getch();
} number", n);
	}
	getch();
}ronoic number", n);
	 }
	 getch();
}