#include<stdio.h>
#include<stdlib.h>   //for exit function

int main()
{
	int num = 0, i = 0;

		printf("Enter a number: ");
		scanf("%d", &num);

		for(i = 2; i <= num/2; i++)
		{
			if(num % i == 0)
			{
				printf("%d is NOT PRIME\n", num);
				exit(1);
			}
		}

		if(num == 1)
			printf("1 is neither prime nor composite\n");
		else
			printf("%d is PRIME\n", num);

	return 0;
}
