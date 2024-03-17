#include<stdio.h>
#define x 5
#define y 4
int main(){
    int a ;
    printf("enter no. \n");
    
    scanf("%d",&a);
    printf("%d" , x+y);
    printf("%d \n",a);
    printf("%d \n",&a); // address in integer format
    printf("%p \n",&a); // address in hexadecimal format
}