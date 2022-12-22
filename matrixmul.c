#include<stdio.h>
int main()
{
int a[10][10],b[10][10],c[10][10];
int i328,j328,k328,m328,n328,p328,q328;

printf("\nThe row & column of Matrix A :");
scanf("%d%d",&m328,&n328);
fflush(stdin);
printf("\nThe row & column of Matrix B :");
scanf("%d%d",&p328,&q328);
if (n328==p328)
{
printf("\nFor Matrix A:-\n");
for(i328=0;i328<m328;i328++)
{
for(j328=0;j328<n328;j328++)
{
printf("\nEnter values for A[%d][%d]=> ",i328,j328);
scanf("%d",&a[i328][j328]);
}
}
printf("\nFor Matrix B:-\n");
for(i328=0;i328<p328;i328++)
{
for(j328=0;j328<q328;j328++)
{
printf("\nEnter values for B[%d][%d]=> ",i328,j328);
scanf("%d",&b[i328][j328]);
}
}
//Matrix Multiplication Logic
for(i328=0;i328<m328;i328++)
{
for(j328=0;j328<q328;j328++)
{
c[i328][j328]=0;
for(k328=0;k328<n328;k328++)
{
c[i328][j328]+=a[i328][k328]*b[k328][j328];
}
}
}
printf("\nMatrix A is\n");
for(i328=0;i328<m328;i328++)
{
for(j328=0;j328<n328;j328++)
printf("%d\t",a[i328][j328]);
printf("\n");
}
printf("\n");
printf("\nMatrix B is\n");
for(i328=0;i328<p328;i328++)
{
for(j328=0;j328<q328;j328++)
printf("%d\t",b[i328][j328]);
printf("\n");
}
printf("\n");
printf("\nMultiplication Matrix C is\n");
for(i328=0;i328<m328;i328++)
{
for(j328=0;j328<q328;j328++)
printf("%d\t",c[i328][j328]);
printf("\n");
}
}
else
printf("\nMultiplication is not possible.\n");
return 0;
}