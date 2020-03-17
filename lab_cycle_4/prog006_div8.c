// program: print if divisible 8

#include<stdio.h>

int main()
{
	// initialize variables
	int n = 0, i = 0;
		
		// take user input
		printf("Enter a number: ");
		scanf("%d", &n);
		
		// logic
		for(i = 1; i <= n; i++)
		{
			if(i % 8 == 0)
				printf("%d\n", i);
		}

		// This can done more efficeintly. I mean in a faster way
		// Multiplication is nothing but addition of same number

	return 0;
}
