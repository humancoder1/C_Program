// #include<stdio.h>

// void printAddress(int n);
// void print_Address(int *n);

// int main(){
//     int num=4;
//     printAddress(num); // call by value
//     printf("address of var num = %p \n", &num);
//     printf("\n");
//     print_Address(&num); // call by reference
//     printf("address of var num = %p \n", &num);
// }

// void printAddress(int n){
//     printf("address of n is = %p \n", &n);
// }

// void print_Address(int *n){
//     printf("address of n is = %p \n", n);
// }

#include<stdio.h>

void operations(int *a , int *b , int *sum , int *prod ,int *avg);

int main(){
    int num1 =3 ,num2 =5 ;
    int sumn , prodn , avgn;
    operations(&num1 , &num2 , &sumn , &prodn , &avgn);
    printf("sum of num1 and num2 = %d \n",sumn);
    printf("product of num1 and num2 = %d \n" , prodn);
    printf("average of num1 and num2 = %d \n" , avgn);
}

void operations(int *a , int *b , int *sum ,int *prod ,int *avg){
    *sum = (*a) + (*b);
    *prod = (*a) * (*b);
    *avg = ((*a)+(*b))/2;
}