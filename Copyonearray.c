// 1. Copy one array to another array

#include <stdio.h>

int main()

{
    int Arr[3] = {0, 1, 2}, Brr[3], i;

    for (i = 0; i < 3; i++)
    {
        printf("Arr[%d] =%d \n", i, Arr[i]);

        Brr[i] = Arr[i];

        printf("Brr[%d] =%d \n", i, Brr[i]);
    }

    return 0;
}