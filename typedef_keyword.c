#include<stdio.h>
int main(){
    // typedef is used to redefine a name of a datatype 
    // it provides an alia to the datatype 

    typedef double db;
    db price = 2200.20;
    db amt = 32.5;
    printf("%f" , price);
}