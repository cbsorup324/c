#include <stdio.h>

int factn(int n);

int main()
{
    int n;
    printf("Please enter a number : \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d", n, factn(n));
}

int factn(int n)
{
   

    if (n == 1)
    {
        return 1;
    }

    else
    {
         int s;
         s = n * factn(n - 1);
        return s;
    }
}