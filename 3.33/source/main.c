#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, i, j;
	
	printf("long:");
	scanf_s("%d",&a);
	printf("width:");
	scanf_s("%d",&b);

	for (i = 1; i <= a; i++)
	{
		for (j = 1; j <= b; j++)
		{
			if (i==1 || i==a || j == 1 || j == b)
			{
				printf("+");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	system("pause");
	return 0;
}