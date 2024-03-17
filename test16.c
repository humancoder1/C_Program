#include<stdio.h>
#include<stdlib.h>
int main(){
    // int  i = 4 , j  = -1 , k = 0 ,w,x,y,z;
    // w = i || j || k;
    // x = i && j && k;
    // y = i || j && k;
    // z = i && j || k;
    // printf("%d %d %d %d \n" , w,x,y,z);
    // printf("%d" , !(-1));
    // int num1 = 4 , num2 = 3 , num3 ;
    // num3 = num1-- - num2;
    // printf ("%d %d %d" , num1, num2 , num3);
    for(int i = 1 ; i++ < 10 ;){
        printf("%d \n" , i);
        if (i == 4){
            printf("bye \n");
            // exit(1);
        }
    }
    printf("hello \n");

    return 0 ;
}