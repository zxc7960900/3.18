#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float sales;
	float Salary;

	printf("Enter sales in dollers(-1 to end):");
	scanf_s("%f", &sales);

	Salary = 200 + sales*0.09;

	while (sales != EOF)
	{
		printf("Salary is:%.2f", Salary);
		printf("\n\n");

		printf("Enter account number (-1 to end):");
		scanf_s("%f", &sales);
	}

	system("pause");
	return 0;
}