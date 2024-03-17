// #include<stdio.h>
// int main(){
//     int students_marks[2][3]={{90,95,100},{80,85,100}};
//     for (int i = 0 ;  i < 2 ; i++){
//         for (int j = 0 ; j < 3 ; j++){
//             printf("%d \n",students_marks[i][j]);
//         }
//         printf("\n");
//     }
// }

// #include<stdio.h>
// int main(){
//     int arr[] = {1,2};
//     arr [3] = 10;
//     printf("%d",arr[3]);
// }

// fibonacci Iterative approach
// #include<stdio.h>
// int main(){
//     int current;
//     int prev1 = 0, prev2 = 1;
//     printf("fibonacci(%d) %d \n", 0 ,prev1);
//     for (int i=1 ;i<=6 ; i++){
//         current = prev1 + prev2;
//         prev2 = prev1;
//         prev1 = current;
//         printf("fibonacci(%d) %d \n" , i ,current);
//     }
// }

// #include<stdio.h>
// int main(){
//     int count = 0;
//     int num = 10;
//     for (int i = 0; i < 4 ; i++){
//         for (int j = 0 ; j < i+1 ; j++){
//             printf("%d ", num);
//             num--;
//         }
//         printf("\n");
//     }
// }

#include<stdio.h>
int main(){
    char ch1 = 'A';
    char ch2 = 'a';
    char ch3 = ch1 + 32;
    printf("%c",ch3);
}