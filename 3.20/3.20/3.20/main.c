#include <stdio.h>
#include <stdlib.h>

main()
{
	int a = 0;
	float b = 0;
	float c = 0;
	printf("Enter # of hours worked (-1 to end):");
	scanf_s("%d",&a);
	while (a != -1)
	{
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f",&b);

		if (a <= 40)
		{
			c = a*b;
		}
		else
		{
			c = 40*b+(a-40)*b*1.5;
		}
		printf("Salary is $%.2f\n", c);
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &a);
	}
	system("pause");
	return 0;
}