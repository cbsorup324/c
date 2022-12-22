//3.Whether an input is perfect num or not
#include<stdio.h>
int main()
{
    int i,n,sum=0,temp;
    printf("Enter any integer : ");
    scanf("%d",&n);

    for(i=1; i<n; i++)
    {
        temp = n%i;
        if(temp == 0)
        {
            sum= sum+i;
        }
    }
    if(sum==n)
    printf("The entered number %d is a perfect number.",n);
    else
    printf("The entered number %d is not a perfect number.",n);
    return 0;
}