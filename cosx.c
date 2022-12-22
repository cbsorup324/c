#include <stdio.h>
#include <math.h>
int fact(int n);
void main()
{
    int n, i, sign=-1;
    double x, cosx=0, ax, temp;
    printf("Enter the value in degree: ");
    scanf("%lf" ,&x);
    printf("Enter the value of n: ");
    scanf("%d" ,&n);
    ax = x;
    x = x*(3.14/180);
    for(i=2 ; i<=n ; i+=2)
    {
        sign = -sign;
        temp = (sign*pow(x,i))/fact(i);
        cosx = cosx+temp;
    }
    printf("The value of cos(%0.f) is %f" ,ax ,cosx);

}
int fact(int n)
{
    int i, fact=1;
    for(i=1 ; i<=n ; i++)
    {
        fact = fact*i;
    }
    return fact;
}