#include<stdio.h>
int main(){
    int matrix1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int matrix1[1][3] = {{1},{2},{3}};
    int matrix2[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int matrix2[3][3] = {{1},{2},{3}};
    int matrix3[3][3];
    int sum = 0;

    for(int row = 0 ; row < 1 ; row++){
        for(int iter1 = 0 ; iter1 < 3 ; iter1++){
            sum = 0;
            for(int iter2 = 0 ; iter2 < 3 ; iter2++){
            sum += matrix1[row][iter2] * matrix2[iter2][iter1];

            }
            matrix3[row][iter1] = sum;
        }
    }
    for (int i = 0 ; i < 3 ; i++){
        for(int  j = 0 ; j < 3 ; j++){
            printf("%d " , matrix3[i][j]);
        }
        printf("\n");
    }
}
/*
   0  1  2     0  1  2
0 11 12 13     1  2  3
1 14 15 16     4  5  6
2 17 18 19     7  8  9
*/
