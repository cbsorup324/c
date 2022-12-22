//7. WAP to print all odd and even numbers separately within a given range. The range is input through user.

#include<stdio.h>
int main()
{
	int number;
	int min_328,max_328;
	printf("Enter the minimum range: ");
	scanf("%d",&min_328);
	printf("Enter the maximum range: ");
	scanf("%d",&max_328);
	printf("Odd numbers in given range are: ");
	for (number = min_328;number <= max_328; number++)
	         if(number % 2 !=0)
	             printf("%d ",number);
	printf("\nEven numbers in given range are: ");
	for (number = min_328;number <= max_328; number++)
	         if(number % 2 ==0)
	             printf("%d ",number);
	return 0;
}
