#include <stdio.h>
#include <stdlib.h>

main(void)
{
	float num1 = 0;
	float num2 = 0;
	float num3 = 0;
	float num4 = 0;
	float num5 = 0;

	printf("Enter account number(-1 to end):");
	scanf_s("%f", &num1);

	while (num1 != -1)
	{
		printf("Enter beginning balance:");
		scanf_s("%f", &num2);
		printf("Enter total charges:");
		scanf_s("%f", &num3);
		printf("Enter total credits:");
		scanf_s("%f", &num4);
		printf("Enter credit limit:");
		scanf_s("%f", &num5);
		num2 = num2 + num3 - num4;

		if (num2 > num5)
		{
			printf("Account:	%f\n", num1);
			printf("Credit limit:	%f\n", num5);
			printf("Balance:	%f\n", num2);
			printf("Credit Limit Exceeded.\n\n");
		}
		printf("Enter account number(-1 to end):");
		scanf_s("%f", &num1);
	}
		system("pause");
		return 0;
}