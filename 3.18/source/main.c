#include <stdio.h>
#include <stdlib.h>

main()
{
	int a=200;
	float b = 0;
	float c = 0;

	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &b);

	while (b != -1)
	{
		c = a + (0.09*b);
		printf("Salary is: %f\n\n", c);
		printf("Enter sales in dollars (-1 to end):");
		scanf_s("%f", &b);
	}
	system("pause");
	return 0;
}