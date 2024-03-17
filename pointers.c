#include<stdio.h>
 int main(){
    int age = 22;
    int*ptr = &age; // 'int* ptr = &age;' and 'int *ptr = &age;' both syntax are correct
    int value1 = *ptr; /* here the value1 variable is 
    storing the value at that address which is stored in the pointer */

    printf("%d \n",age);

    printf("address of age variable in unsigned int format is %u \n", &age);
    
    printf("address of age variable in hexadecimal format is %p \n", &age);

    printf("address stored in pointer 'ptr' is %p \n", ptr);

    printf("address of pointer 'ptr'in hexdecimal format is %p \n", &ptr);

    printf("address of pointer 'ptr' in unsigned int format is %u \n", &ptr);

    printf("value stored at address that is stored in poiner 'ptr' is %d", *ptr);
    // '*' means value at address operator 
 }