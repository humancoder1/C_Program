#include<stdio.h>
int main(){
    int a = 10 ;
    int b = 10 ;
    // int num1 = ++a + a++ ;
    // int num2 = b++ + ++b;
    // printf("%d \n" , num1);
    // printf("%d" , num2);
    // printf("number1 = %d , number2 = %d \n" , a , b);

    // printf("number1 = %s , number2 = %d \n" , a , b);

    // float num1 = 13.5;
    // double num2 = 13.5;
    // printf("%f %lf" , num1 , num2);
    char str[10] = "abcde";
    int size = sizeof(str)/sizeof(str[0]);
    printf("%d" , size);

    // for (int i =  ; i >= 0 ; i--){
    //     printf("%c" , str[i]);
    // }
    return 0;
}