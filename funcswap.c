//Swap using fuction
#include <stdio.h>
    void
    swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping the number x=%d and y=%d \n", a, b);
}

int main()
{
    int m, n;
    printf("Enter two nubers ");
    scanf("%d %d", &m, &n);
    printf("Before swapping the number the x=%d and y=%d \n", m, n);
    swap(m, n);
    return 0;
}