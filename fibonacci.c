#include<stdio.h>
int fibbonacci(int n_328)
{
int t1_328=0, t2_328=1,nextTerm_328 = 0,i_328=1;
printf("The %d terms series of fibbonancci : ",n_328);
while(i_328<=n_328){
    printf(" %d ",t1_328);
    nextTerm_328 = t1_328 + t2_328;
    t1_328 = t2_328;
    t2_328 = nextTerm_328;
    i_328++;
}
}
int main()
{
    int n_328;
    printf("Enter the value how many numbers you want  : ");
    scanf("%d",&n_328);
    fibbonacci(n_328);
return 0;    
}
