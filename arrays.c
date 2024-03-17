#include<stdio.h>
#include<armstrongnumber.c>
int main(){
    int marks[3];
    printf("marks of phy: \n");
    scanf("%d" , &marks[0]);

    printf("marks of chem: \n");
    scanf("%d" , &marks[1]);

    printf("marks of maths: \n");
    scanf("%d" , &marks[2]);

    printf("phy = %d , chem = %d , maths = %d" , marks[0],marks[1],marks[2]);

}