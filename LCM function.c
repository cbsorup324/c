#include<stdio.h>
int LCM(int a_328, int b_328)
{
    int i_328,lcm_328,gcd_328;
    for ( i_328 = 1; i_328 <= b_328 && i_328<=a_328; i_328++)
    {
        if(a_328%i_328==0 && b_328%i_328==0)
        {
            gcd_328=i_328;
        }
    }
    lcm_328=(a_328*b_328)/gcd_328;
    printf("This is the lcm = %d",lcm_328);    
}
int main()
{
    int num1_328,num2_328;
    printf("Enter the two numbers :  ");
    scanf("%d %d",&num1_328,&num2_328);
    LCM(num1_328,num2_328);

    return 0;
}