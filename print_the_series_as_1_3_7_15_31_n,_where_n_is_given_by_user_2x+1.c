//4. WAP to print the series as 1 3 7 15 31 ..........n, where n is given by user. (2x+1)

#include<stdio.h>

int main()

{

    int n_328,i_328,x_328=0;

    printf("Enter the range of number:");

    scanf("%d",&n_328);

    for(i_328=1;i_328<=n_328;i_328++)

    {

        x_328=2*x_328+1;

        printf("%d ",x_328);

    }

    return 0;

}

