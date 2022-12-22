#include<stdio.h>
int fibbonacci(int n)
{
int t1=0, t2=1,nextTerm = 0,i=0;
while(nextTerm<=n){
    if (nextTerm==n)
    {
        i++;
    }    
    nextTerm = t1 + t2;
    t1 = t2;
    t2 = nextTerm;
}
if (i>0)
{
    printf("Entered number is a fibonacci nambuers .\n");
}
else
printf("Entered number is not a fibbonacci numbers . \n");

}
int main()
{
    int n;
    printf("Enter the numbers that you want to test : \n");
    scanf("%d",&n);
    fibbonacci(n);
return 0;    
}
