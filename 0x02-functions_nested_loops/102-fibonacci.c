#include <stdio.h>
/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int i;
	unsigned long n1 = 0, n2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = n1 + n2;
		printf("%lu", sum);


		n1 = n2;
		n2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");

	}

	return (0);

}

