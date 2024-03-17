#include<stdio.h>
int main(){
    // '&' bitwise and operator
    // '|' bitwise or operator
    /* when we use bitwise operator first it convert the number into 
        binary format i.e. 1 and 0 format*/
    /* when we use bitwise '|' operator 1 | 0 results in 1 and 0 | 0 results in 0
            25 --> 1 1 0 0 1
            15 --> 0 1 1 1 1
            -------------------
            31 --> 1 1 1 1 1 
    */
   /* when we use bitwise '&' operator 1 & 0 results in and 0 & 0 results in 0 and 1 & 1 results in 1   
            25 --> 1 1 0 0 1 
            15 --> 0 1 1 1 1
            -----------------
            9  --> 0 1 0 0 1
   */
    int result1= 25 | 15 ;
    printf("result of bitwise '|' operator is %d \n",result1);
    
    int result2= 25 & 15;
    printf("result of bitwise '&' operator is %d",result2);
    
    // Left and Right shift operator
    // '<<' left shift operator
    // '>>' right shift operator
    /*when we use '<<' operator it shifts zero to left of the binary format of the decimal format number
     .i.e it adds two zero to the left side of the binary format of the number */
    
    
    return 1;




}
;