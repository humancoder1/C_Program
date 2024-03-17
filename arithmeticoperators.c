#include<stdio.h>

int main(){
    int i=9, j=3,k;
    k=i+j; // Addition operator
    printf("result of addition operator:%d \n",k);

    k=i-j; // Subtraction operator
    printf("result of subtraction operator:%d \n",k);

    k=i*j;  // Multiplication operator
    printf("result of multiplication operator:%d \n",k);

    k=i/j;  // division operator
    printf("result of division operator:%d \n",k);

    k=i%j;  // modulous operator(result is remainder)
    printf("result of modulus operator:%d",k);
}
// as we assign a new value to a particular variable its previous value gets overwrited
// like the value of k is changing with every new operation