// #include<stdio.h>
//  void maxNum(int *a , int * b);

//  int main(){
//     int num1 = 10 , num2 = 20 ;
//     maxNum(&num1 , &num2);
//  }

//  void maxNum(int *a , int *b){
//     if ((*a) > (*b)){
//         printf("num1 is maximum number");
//     }
//     else{
//         printf("num2 is maximum number");
//     }
//  }


// #include <stdio.h>
// int main(){
//     int marks[] = {90,95,100};
//     printf("%d \n",marks[0]);
//     printf("%d \n",marks[1]);
//     printf("%d \n",marks[2]);
// }

// #include<stdio.h>
// int main(){
//     int age = 22;
//     int *ptr=&age;
//     printf("memory location in pointer ptr initially = %u \n",ptr);
//     ptr++; 
//     printf("memory location in pointer ptr after increment = %u \n", ptr);
// }

// #include<stdio.h>
// int main(){
//     int age1 = 21 ;
//     int age2 = 23 ;
//     int age3 = 24 ;
//     int *ptr1 = &age1;
//     int *ptr2 = &age2;
//     int *ptr3 = &age3;
//     printf("ptr1 = %u \n", ptr1);
//     printf("ptr2 = %u \n", ptr2);
//     printf("ptr3 = %u \n", ptr3);

//     printf("difference = %d \n", ptr1-ptr3);
    
//     ptr2 = &age2;
//     printf("comparison = %d \n", ptr1 == ptr2);
// }
// #include<stdio.h>
// int main(){
//     int age = 22;
//     char ch = '*';

//     int *ptr1 = &age;
//     char *ptr2 = &ch;

//     printf("difference = %d", ptr1-ptr2);
// }