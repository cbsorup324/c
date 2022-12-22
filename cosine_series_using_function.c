/*2. WAP to compute the cosine series using function. cos(x) = 1 − x2/2! +
x4/4! − x6/6! + ........*/

#include <stdio.h>
#include <math.h> 
float fact(int, int); 
int main() 
{ 
    int x041, n041, i; 
    float cos = 1; 
    printf("Enter the value of x"); 
    scanf("%d", &x041); 
    printf("How many terms you want to calculate:"); 
    scanf("%d", &n041);
       for (i = 1; i < n041; i++) 
       {
            if (i % 2 == 0) 
              { cos = cos + fact(x041, i); 
              }
              else 
               { cos = cos - fact(x041, i); 
               } 
        }printf("The value of cos function is:%f",cos); 
    return 0; 
}

float fact(int a,int b)
{
     long int s,f=1; float sum=0;
       s=pow(a,2*b); 
         for (int j=1;j<=2*b;j++) 
         { f=f*j; 
         }
         sum=(float)s/f;
     return sum;
}