/*Q.2.WAP to find the median of a list of numbers.
*/
#include<stdio.h>

int main()

{

    int i, n_328, first_328, second_328, median_328;

    printf("Enter the size of array : ");

    scanf("%d",&n_328);

    int arr_328[n_328];

    printf("Enter the elements in sorted array : ");

    for(i=0;i<n_328;i++){

        scanf("%d",&arr_328[i]);

    }



    printf("Entered elements are : ");

    for(i=0;i<n_328;i++) {

        printf("%d ", arr_328[i]);

    }

    if(n_328%2 == 0) {

        first_328 = arr_328[(n_328/2) - 1];

        second_328 = arr_328[n_328/2];

        median_328 = (first_328+second_328)/2;

        printf("\nThe median is  : %d",median_328);

    }

    if(n_328%2 != 0) {

        median_328 = arr_328[(n_328-1)/2];

        printf("\nThe median is  : %d",median_328);

    }

}

