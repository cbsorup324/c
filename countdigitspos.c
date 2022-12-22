#include<stdio.h>
void sumofpos(int a[],int num,int sum);
int main()
{ 
    int i,a[100],num,sum=0;
    printf(" Enter num of array elements\n");
    scanf("%d",&num);
    printf("Enter Array Elements\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
  sumofpos(a,num-1,sum);

}
void sumofpos(int a[],int num, int sum)
{
    if(num>=0)
    {
    {
        sum+=(a[num]);
    
    }
  sumofpos(a,num-1,sum);
    }
    else 
    {
        printf("sum=%d\n",sum);
        return ;
    }
}