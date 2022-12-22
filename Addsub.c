#include<stdio.h>
int main()
{
    double a, b;
    int n;
    printf("Enter two numbers: ");
    scanf("%lf  %lf", &a, &b);

    printf("Enter 1=add, 2=substract, 3=multiply, 4=divide");
    scanf("%d", &n);

    if ((n==1 )|| (n==2) || (n==3) || (n==4))
    {
        switch(n)
        {
        case(1):
        {
            printf("Addition %lf", a+b);
            break;
        }
        case(2):
        {
            printf("Substraction %lf", a-b);
            break;
        }
        case(3):
        {
            printf("Multiplication %lf", a*b);
            break;
        }
        case(4):
        {
            printf("Division %lf \n", a/b);
            break;
        }
        default:
        {
            printf("This program is confined to only addtion, substraction, multiplication, and division");
        }
        }
    }
    else
    printf("Invalid Operator");

    return 0;
}