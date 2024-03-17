// #include<stdio.h>
// int main(){
//     int result = 25 & 15 & 10;
//     printf("%d",result);
// }
#include<stdio.h>

void Swap1(int *num1 , int *num2){
    *num1 = (*num1) + (*num2); // a = a + b
    *num2 = (*num1) - (*num2); // b = a - b
    *num1 = (*num1) - (*num2); // a = a - b
}

void Swap2(int *num1 , int  *num2){
    *num1 = (*num1) ^ (*num2);
    *num2 = (*num1) ^ (*num2);
    *num1 = (*num1) ^ (*num2);
}

void Swap3(int *num1 ,  int *num2){
    // one line solution
    *num2 = (*num1) + (*num2) - ((*num1) = (*num2)); // b = a + b - (a=b)
}

void Swap4(int *num1 , int *num2){
    int temp ;
    temp = *num1; // temp = a
    *num1 = *num2; // a = b 
    *num2 = temp; // b = temp
}
int main(){
    // int a=5 , b=6 , temp; //always declare the variables in the begining
    int number1 ,  number2;
    scanf("%d  %d", &number1 , &number2);

    Swap1(&number1 , &number2);
    printf("first_number : %d  , second_number : %d" , number1 , number2);

}