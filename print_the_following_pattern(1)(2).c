/*Q.2.WAP to check whether an print the following pattern for n rows!.
*/
#include <stdio.h>
int main()
{
    int num_328, originalNum_328, remainder_328, result_328 = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num_328);
    originalNum_328 = num_328;

    while (originalNum_328 != 0) 
    {
        remainder_328 = originalNum_328 % 10;
        result_328 += remainder_328 * remainder_328 * remainder_328;

        originalNum_328 /= 10;
    }

    if (result_328 == num_328)
        printf("%d is an Armstrong number.", num_328);
    else
        printf("%d is not an Armstrong number.", num_328);

    return 0;
}
