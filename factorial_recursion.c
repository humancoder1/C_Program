////sum of first n natural numbers
// #include<stdio.h>
// int naturalSum(int num);
// int main(){
//     printf("%d",naturalSum(5));
//     return 1;
// }

// int naturalSum(int num){
//     if (num == 1){
//         return 1;
//     }
//     int sum1= naturalSum(num-1);
//     int sumn = sum1 + num;
//     return sumn;
// }

// factorial of n 
#include<stdio.h>
int fact(int num);
int main() {
    printf("%d",fact(5));
    return 1;
}

int fact(int num){
    if (num == 1 || num == 0){
        return 1;
    }
    int factn = num * fact(num-1); 
    return factn;
}