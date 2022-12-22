#include<stdio.h>
int main()
{
    int mark_t328,tm_328;
    printf("Enter your marks :");
    scanf("%d",&mark_t328);
    tm_328=mark_t328/10;
    
    if(tm_328==9){
        printf("The grade is O .");
        
    }
    else if(tm_328==8){
       printf("The grade is E .");
        
    }   
    else if(tm_328==7){
       printf("The grade is A .");
         
    }
    else if(tm_328==6){
       printf("The grade is B .");
        
    }
    else if(tm_328==5){
       printf("The grade is C .");
        
    }       
    
    else if(tm_328==4){
       printf("The grade is D .");
        
    }
    else
    printf("FAIL");
}