// Ternary opertor 

//syntax of ternary operator=> condition?expression1:expression2
/* if condition written is True then expression1 will execute,
if condition is false then expression2 will execute*/
#include<stdio.h>
int main(){
    int i = 1;
    int j = 0;
    
    // if (i==1){
    //     j=5;
    // }
    // else{
    //     j=6;
    // }
    j= i==1?5:6;
    printf("%d \n",j);
}
    
