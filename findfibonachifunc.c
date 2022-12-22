#include<stdio.h>
int fibbonacci(int n_328)
{
int t1_328=0, t2_328=1,nextTerm = 0,i_328=0;
while(nextTerm<=n_328){
    if (nextTerm==n_328)
    {
        i_328++;
    }    
    nextTerm = t1_328 + t2_328;
    t1_328 = t2_328;
    t2_328 = nextTerm;
}
if (i_328>0)
{
    printf("Entered number is a fibonacci numbers .\n");
}
else
printf("Entered number is not a fibbonacci numbers . \n");

}
int main()
{
    int n_328;
    printf("Enter the numbers that you want to test : \n");
    scanf("%d",&n_328);
    fibbonacci(n_328);
return 0;    
}
