#include<stdio.h>

int main()
{
	int a = 0, b = 1, n = 0, temp = 0;
	int i = 0;
		printf("Enter the value of n: ");
		scanf("%d", &n);

		for(i = 0; i<=n; i++)
		{
			printf("%d\n", a);
			temp = a;
			a = b;
			b = temp + b;
		
		}
	return 0;
}
