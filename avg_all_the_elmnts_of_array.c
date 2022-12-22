/*Q.2.Find the average of all the elements of an array.
 */
#include <stdio.h>

int main(void)

{

	int numbers_328[10];

	int count_328 = 10;

	int sum_328 = 0;

	float average_328 = 0.0f;

	printf("\nEnter the 10 numbers:\n");

	int i;

	for (i = 0; i < count_328; i++)

	{

		printf("%d.Enter no:", i + 1);

		scanf("%d", &numbers_328[i]);

		sum_328 += numbers_328[i];
	}

	printf("\nsum of the ten numbers entered is: %d\n", sum_328);

	average_328 = (float)sum_328 / count_328;

	printf("\nAverage of the ten numbers entered is: %f\n", average_328);

	return 0;
}
