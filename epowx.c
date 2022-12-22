#include <stdio.h>
#include <math.h>
int fact(int n);
void main()
{
    int n, i;
    double x, e=1, temp;
    printf("Enter the value of x: ");
    scanf("%lf" ,&x);
    printf("Enter the value of n: ");
    scanf("%d" ,&n);
   /*ax = x;
    x = x*(3.14/180);*/
    for(i=1 ; i<=n ; i++)
    {
        temp = pow(x,i)/fact(i);
        e = e+temp;
    }
    printf("The value of e pow x is %f" ,e);

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