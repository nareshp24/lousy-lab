#include<stdio.h>

int main()
{
	int n = 0, i = 0, j = 2, m = 0;
	int isPrime = 1;

		printf("Enter the start and end: ");
		scanf("%d %d", &m, &n);  //m = start, n = end
		
		if (m == 1 || m == 0)	//because 1 is neither a prime nor a composite
			m = 2; //it should be avoided

		for(i = m; i <= n; i++)
		{
			isPrime = 1;
			for(j = 2; j <= i/2; j++)
			{
				if (i % j == 0)
				{
					isPrime = 0;
					break;
				}
			}

			if(isPrime)
				printf("%d\n", i);
		}

	return 0;

}
