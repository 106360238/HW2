#include <stdio.h>
#include <stdlib.h>

main()
{
	float a = 0;
	float b = 0;
	int c = 0;
	float d = 0;

	printf("Enter loan principal (-1 to end):");
	scanf_s("%f", &a);

	while (a != -1)
	{
		printf("Enter interest rate:");
		scanf_s("%f",&b);
		printf("Enter term of the loan in days:");
		scanf_s("%d",&c);
		d = a*b*c / 365;
		printf("The interest charge is $%f\n\n",d);
		printf("Enter loan principal (-1 to end):");
		scanf_s("%f", &a);
	}
	system("pause");
	return 0;
}