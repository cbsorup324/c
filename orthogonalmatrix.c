_328//2.WAP to check whether a given matrix is orthogonal or not.

#include<stdio.h>
void main()
{
   int m_328, n_328, p_328, c_328, d_328, k_328, sum_328 = 0;
   int matrix[10][10], transpose[10][10], product[10][10];
 
   printf("Enter the number of rows and columns of matrix:");
   scanf("%d%d",&_328m,&_328n);
   printf("Enter the elements of matrix\n");
 
   for (  c_328 = 0 ; c_328 < m_328 ; c_328++ )
      for ( d_328 = 0 ; d_328 < n_328 ; d_328++ )
         scanf("%d",&matrix[c_328][d_328]);
 
   for( c_328 = 0 ; c_328 < m_328 ; c_328++ )
   {
      for( d_328 = 0 ; d_328 < n_328 ; d_328++ )
      {
         transpose[d_328][c_328] = matrix[c_328][d_328];
      }
   }
   for ( c_328 = 0 ; c_328 < m_328 ; c_328++ )
   {
      for ( d_328 = 0 ; d_328 < n_328 ; d_328++ )
      {
         for ( k_328 = 0 ; k_328 < n_328 ; k_328++ )
         {
            sum_328 = sum_328 + matrix[c_328][k_328]*transpose[k_328][d_328];
         }
 
         product[c_328][d_328] = sum_328;
         sum_328 = 0;
      }
   }
   for ( c_328 = 0 ; c_328 < m_328 ; c_328++ )
   {
       for ( d_328 = 0 ; d_328 < m_328 ; d_328++ )
       {
           if ( c_328 == d_328 )
           {
                if ( product[c_328][d_328] != 1 )
                   break;
           }
           else
           {
               if (product[c_328][d_328] != 0 )
                  break;
           }
       }
       if ( d_328 != m_328 )
          break;
   }
   if ( c_328 != m_328 )
      printf("Matrix is not orthogonal.\n");
   else
      printf("Matrix is orthogonal.\n");
}