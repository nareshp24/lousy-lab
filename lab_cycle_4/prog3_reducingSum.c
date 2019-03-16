#include<stdio.h>

int main()
{
	int num = 0, i = 0;
	int sum = 0, originalNumber = 0;

		printf("Enter a number: ");
		scanf("%d", &num);
	
		originalNumber = num;
		
		while (num != 0)
		{
			sum += (num%10);
			num = num/10;
		}

		printf("reduced sum of %d is %d\n", originalNumber, sum);


	return 0;
}
