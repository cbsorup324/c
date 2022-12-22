/*Q.4 WAP to print the following pattern for n rows.( Ex. for n=5 rows )
1 
2 1
1 2 3 
4 3 2 1 
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
  int i,j,n;
  printf("Enter the number of rows:");
  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    if(i%2 != 0){
      for(j=1;j<=i;j++){
         printf("%d",j);
      }
      }else{
         for(j=i;j>=1;j--){
             printf("%d",j);
         }
      }
     printf("\n");
  }
  return 0;
}
