// using XOR(^) operator

/*when XOR operator used with same numbers it results to zero
      ex-> 5^5 will give output as 0*/
/*when one value is any digit except zero and other is zero then the result is the number itself
      ex-> 5^0 will give output as 5*/
/*when both the numbers are different the result will be their difference
      ex-> 5^4 will give output as 1*/
#include<stdio.h>
int main(){
    int a;
    a = 5^4;
    printf("%d",a);
}