// #include<stdio.h>
// int main(){
//     int items[5] = {1,2,3,4,5};
//     int *ptr = items;
//     for (int i = 0 ; i<5 ; i++){
//         printf("%d \n",*ptr);
//         ptr++;
//     }
// }

//  LINEAR SEARCH in ARRAY
// #include<stdio.h>
// int main(){
//     int items[9] = {1,2,3,4,5,6,7,8,9};
//     int num = 5; 
//     int *ptr = items;
//     for (int i = 0 ; i<5 ; i++){
//         if (*(ptr+i) == num){
//             printf("%d",i);
//         }    
//     }
// }

#include<stdio.h>
void printNumbers(int *ptr , int n);
int main(){
    int items[] = {1,2,3,4,5,6,7,8,9,10};
    printNumbers(items,10);
    return 1;
}

void printNumbers(int *ptr , int n){
    for (int i = 0 ; i < n ; i++){
        printf("%d \t", *(ptr+i));
    }
}