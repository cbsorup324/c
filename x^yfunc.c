#include <stdio.h>
#include <math.h>
 
int main()
{
    int x_328,y_328;
    int result_328;
 
    printf("Enter the value of base: ");
    scanf("%d",&x_328);
 
    printf("Enter the value of power: ");
    scanf("%d",&y_328);
     
    result_328 =pow((double)x_328,y_328);
 
    printf("%d to the power of %d is= %d", x_328,y_328, result_328);
    getch();
    return 0;
}
