#include<stdio.h>

int main(){
    int i=2;        // i is a variable(container) storing a value. int is the integer datatype of variable i 
    int k=3;        // k is a variable(container) storing a value. int is the integer datatype of variable k
    float j=5.5;    // j is a variable(container) storing a value. float is the deciaml(floating number) datatype of variable j
    char c='h';     // c is a variable(container) storing a value. char is the character('symbol or letter') datatype of variable c
    printf("%d\n",(k+i)); // printf means print format
    // "\n" is escape sequence used for new line
    // for a single character use single quotes('') and for more than one character use double characters("")
    // ["%d"] is used with printf() function for printing only integer value 
    printf("the addition is %d",(k+i));
}
