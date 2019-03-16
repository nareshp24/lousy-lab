#include<stdio.h>

int main()
{
	int n = 0, i = 0;
		
		printf("Enter a number: ");
		scanf("%d", &n);

		for(i = 1; i <= n; i++)
		{
			if(i % 8 == 0)
				printf("%d\n", i);
		}

	

	return 0;
}
