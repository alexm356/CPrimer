#include <stdio.h>

int main(void)
{
	int sum, count, max_count;
	sum = 0;
	count = 1;

	printf("How many squares would you like to sum? ");
	scanf("%d", &max_count);
	while (count <= max_count)
	{
		sum = sum + count * count;
        printf("Sum = %d\n", sum);
		count++;
	}
	printf("The sum of the first %d squares is: %d\n", max_count, sum);

	return 0;
}

/*

5

1 2 3 4 5

1 + 4 + 9 + 16+ 25 = 55


*/