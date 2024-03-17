#include<stdio.h>
// #define is a preprocessor which is use to create constants or macros
#define x 5 //this defines x as a constant of value 5 
int main(){
    // int x = 2; //here we cannot define x again because x is already defined with a constant value 5
    int i = x;
    printf("value of i is %d",i);
    return 1;
}