#include<stdio.h>

int main()
{
	int num = 0, reverse = 0, originalNum = 0;
	int i = 0, raw = 0;

		printf("Enter a 4 digit number: ");
		scanf("%d", &num);

		originalNum = num;

		for(i = 0; i < 4; i++)
		{
			raw = num%10;
			reverse = reverse*10 + raw;
			num = num/10;
		}

		if (reverse - originalNum == 0)
			printf("PALINDROME\n");
		else
			printf("NOT A PALINDROME\n");

	return 0;
}
