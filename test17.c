#include<stdio.h>
#include<stdlib.h>

int main(){
    int a = 5 ;
    for(int i = 1 ; i <= 10 ; i++){
        for(int  j =5 ; j <= 10 ; j++){
            if (j == i){
                break;
            }
            printf("[%d %d ] " , i , j);
            
        // if (i == a){
        //     // goto label1;
        // }
        }
        printf("\n");
    }
    exit(1);
    label1 :
        printf("hello");
    return 0;
}