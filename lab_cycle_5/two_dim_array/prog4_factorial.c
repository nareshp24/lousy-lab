#include<stdio.h>
#include<stdlib.h>

//function prototype
unsigned long int fact(int);

int main()
{
	int n = 0;
	unsigned long int factorialN = 0;

		printf("Enter the number: ");
		scanf("%d", &n);

		if(n < 0)  //n should always be positive
		{
			printf("should be a positive integer\n");
			printf("Program Terminated\n");
			exit(1);
		}

		factorialN = fact(n);
		printf("%d! = %ld\n", n, factorialN);

	return 0;
}

unsigned long int fact(int k)
{
	//unsigned long int factorial = 1;

	if(k == 0)
		return 1;

	return k * fact(k - 1);
}
