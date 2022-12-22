//2 WAP to print the following pattern for n rows


#include<stdio.h>

int main()

{

  int i_328,j_328,n_328;

  printf("Enter the number of rows:");

  scanf("%d",&n_328);

  

  for(i_328=1;i_328<=n_328;i_328++){

    if(i_328%2 != 0){

      for(j_328=1;j_328<=i_328;j_328++){

         printf("%d",j_328);

      }

      }else{

         for(j_328=i_328;j_328>=1;j_328--){

             printf("%d",j_328);

         }

      }

     printf("\n");

  }

  return 0;

}

