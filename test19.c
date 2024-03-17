#include<stdio.h>
int main(){
    // char name[] = "Hello";
    // char *ptr = name; 
    // // ptr = name;
    // // printf("%c" , *ptr);
    // while (*ptr != '\0'){
    //     printf("%c" , *ptr);
    //     ptr++;
    // }

    int a = 10 ;
    int b = 7 ;
    int arr [] = {a,b};
    for (int  i = 0 ; i < 2 ; i++){
        printf("%d \n" , arr[i]);
        
    }
    return 0 ;
}