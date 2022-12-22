/*1. WAP to find LCM of two numbers a and b by using a suitable function
(say LCM) for this */

#include <stdio.h>
 int lcm(int a_328, int b_328) 
 { 
     int x_328 = a_328>b_328?a_328:b_328;
      for(int i_328=x_328; i_328<=a_328*b_328; i_328++)
       { if(i_328%a_328==0 && i_328%b_328==0)
        {
             x_328 = i_328;
             break;
        } 
              
       }
        return x_328;
 }
 int main(void)
 {
      int a_328,b_328; 
    printf("Give the two numbers: ");
    scanf("%d %d",&a_328 ,&b_328);
    printf("the LCM of %d and %d is %d\n",a_328 ,b_328 ,lcm(a_328,b_328)); 
 }