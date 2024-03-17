#include<stdio.h>

// 'pragma warn' directive suppresses the warnings.
#pragma warn-rvl /*warning regarding return value are suppressed*/
#pragma warn -par /*warning regarding parameter not used are suppressed */
#pragma warn -rch /*warning regarding unreachable code are suppressed*/

int funct1(){
    int a = 5 ;
    printf("%d" , a);
}

void funct2(int a){
    printf("Hello World");
}

int funct3(){
    int x = 6 ;
    return x;
    x++;
}

int main(){
    funct1() ;
    funct2(8);
    funct3();
    return 0;  
}