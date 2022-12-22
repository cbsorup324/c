#include<stdio.h>
int palindrome(int x_328)
{
    int rem_328,sum_328=0,temp_328;
    temp_328=x_328;
    while (x_328!=0)
    {
        rem_328=x_328%10;
        sum_328=sum_328*10+rem_328;
        x_328=x_328/10;
    }
    if (sum_328==temp_328)
    {
        printf("The number is palindrome.");
    }
    else
    printf("The number is not a palindrome.");
    
}
int main()
{
    int n_328;
    printf("Enter a number :");
    scanf("%d",&n_328);
    palindrome(n_328);

    return 0;
}