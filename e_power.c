#include<stdio.h>
double epower(double x)
{
    double m,sumr=1,sump=1,total=1;
    for(m=1;m<=100;m++){
        sumr=sumr*x;
        sump=sump*m;
        total=total+(sumr/sump);
    }
    return total; 
}
int main(void)
{
    double x,result;
    printf("Enter the value of x : ");
    scanf("%lf",&x);
    result=epower(x);
    printf("The value of expotential : %lf\n",result);

}