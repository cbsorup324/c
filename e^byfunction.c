#include<stdio.h>
double epower(double x_328)
{
    double m_328,sumr_328=1,sump_328=1,total_328=1;
    for(m_328=1;m_328<=100;m_328++){
        sumr_328=sumr_328*x_328;
        sump_328=sump_328*m_328;
        total_328=total_328+(sumr_328/sump_328);
    }
    return total_328; 
}
int main(void)
{
    double x_328,result_328;
    printf("Enter the value of x : ");
    scanf("%lf",&x_328);
    result_328=epower(x_328);
    printf("The value of expotential : %lf\n",result_328);

}