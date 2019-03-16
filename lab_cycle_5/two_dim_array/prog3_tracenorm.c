#include<stdio.h>
#include<stdlib.h>
#include<math.h>

# define maxsize 10

int main()
{
	int n = 0, i = 0, j = 0;
	int arr[maxsize][maxsize] = {0};
	float trace = 0, norm = 0;
		
		//trace and norm exist only for square matrices
		printf("Enter the dimension of square matrix: " );
		scanf("%d", &n);

		if(n > maxsize)
		{
			printf("Dimension exceeds maxsize\n");
			printf("Program terminated\n");
			exit(1);
		}

		//take input
		printf("input values\n");
		for (i = 0; i < n; i++)
			for(j = 0; j < n; j++)
				scanf("%d", &arr[i][j]);

		//display matrix
		printf("\nInput matrix = \n");
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < n; j++)
				printf("%d\t", arr[i][j]);

			printf("\n");
		}

		//Trace: sum of diag elements
		//Norm: square-root of sum of squares of diag elements
		for(i = 0; i < n; i++)
		{
			trace += arr[i][i];
			norm += arr[i][i] * arr[i][i];  //this not the norm. this is just sum of squares
		}

		norm = sqrt(norm);

		//display trace and norm
		printf("\ntrace = %.3f\n", trace);
		printf("norm = %.3f\n", norm);

	return 0;
}

