// ques 42 
// #include<stdio.h>
// int odd_num_Count(int arr[],int n);
// int main(){
//     int numbers[] = {1,2,3,4,5,6};
//     int count_num = odd_num_Count(numbers,6);
//     printf("%d",count_num);
// }
// int odd_num_Count(int arr[],int n){
//     int count = 0;
//     for (int i = 0 ; i < n ; i++){
//         //if (!(arr[i] & 1)) // bitwise operation
//         if (arr[i] % 2 == 0) // normal arithmetic opeation
//         {
//             count += 1;
//         }
//     }
//     return count;
// }

// ques 43
// #include<stdio.h>
// int main(){
//     int arr[] = {1,2,3,4,5};
//     printf("%d \n",*(arr+2));
//     printf("%d \n",*(arr+5)); 
//     printf("%d \n",(arr+5));
// }

// ques 44
// #include<stdio.h>
// int reverse_Array1(int arr[] , int n);
// int main(){
//     int nums [] = {1,2,3,4,5,6,7,8,9,10};
//     reverse_Array1(nums , 10);
//     for(int j = 0 ; j < 10 ; j++){
//         printf("%d \n" ,nums[j]);
//     }
// }

//passing array in argument
// int reverse_Array1(int arr[], int n){
//     for (int i = 0 ; i < n/2 ; i++){
//         int value1 = arr[i];
//         arr[i] = arr[n-(i+1)];
//         arr[n-(i+1)] = value1;
//     }
// }
// passing pointer in argument 
// int reverse_Array2(int *ptr , int n){
//     for(int i = 0 ; i < n/2 ; i++){
//         int value1 = *(ptr+i);
//         *(ptr+i) = *(ptr + (n-(i+1)) );
//         *(ptr + (n-(i+1)) ) = value1;
//     }
// }

// // Ques 45
// #include<stdio.h>
// int main(){
//     int n1 ;
//     int n2 = 0 ,n3 = 1;
//     printf("fibonacci(%d) is %d \n", 0 ,n2);
//     for (int i = 1 ; i <= 10 ; i++){
//         n1 = n2 + n3 ;
//         n3 = n2 ;
//         n2 = n1 ;
//         printf("fibonacci(%d) is %d \n", i ,n1);
//     }
// }

//ques 46
// #include<stdio.h>
// int main(){
//     int tables[2][12];
//     for(int i = 0 ; i < 2 ; i++){
//         for(int j = 0  ; j < 12  ; j++){
//             tables[i][j] = (i+2)*(j+1);
//         }
//     }
//     for(int a = 0 ; a < 2 ; a++){
//         for(int b =0 ; b < 12 ; b++){
//             printf("%d \t" , tables[a][b]);
//         }
//         printf("\n");
//     }
// }[]

// homework ques 1
// #include<stdio.h>
// int main(){
//     int array1[] = {1,6,5,3,1,2,4,1,9,1,7};
//     int num = 1 , count = 0;
//     for (int  i = 0  ; i < 11 ; i++){
//         if (num == array1[i]){
//             count++;
//         }
//     }
//     printf("%d" , count);
// }

// //homework ques2
// #include<stdio.h>
// int main(){
//     int array_num[] = {2,-1,7,11,-13,4,20};
//     int great_num = array_num[0];
//     for(int i = 0 ; i < 7 ; i++){
//         if (great_num < array_num[i]){
//             great_num = array_num[i];
//         }
//     }
//     printf("greates number in array is %d \n", great_num);
// }

#include<stdio.h>
int main(){
    int array1[] = {1,2,3,4,5};
    array1[5] = 6;
    printf("%d" , array1[5]);
    for (int i = 0 ; i < 6 ; i++){
        printf("%d \n",array1[i]);
    }
}