#include<stdio.h>

int main()
{
	int n = 0, sumOdd = 0, sumEven = 0;
	int i = 0;
		printf("Enter the value of n: ");
		scanf("%d", &n);

		for(i = 0; i<=n; i++)
		{
			if (i % 2 == 0)
				sumEven += i;
			else
				sumOdd += i;
		}

		printf("Sum of odd numbers in range 0 to %d is %d\n", n, sumOdd);
		printf("Sum of even numbers in range 0 to %d is %d \n", n, sumEven);

	return 0;
}
