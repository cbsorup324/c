//3. WAP to display values in reverse order from an integer array using pointer
#include<stdio.h>   
#define N 5  
  
int main()  
{  
    int a[N], i_328, *ptr;  
  
    printf("Enter %d integer numbers\n", N);  
    for(i_328 = 0; i_328 < N; i_328++)  
        scanf("%d", &a[i_328]);  
  
    ptr = &a[N - 1];  
  
    printf("\nElements of array in reverse order \n");  
    for(i_328 = 0; i_328 < N; i_328++)  
        printf("%d\n", *ptr--);  
  
    return 0;  
}  