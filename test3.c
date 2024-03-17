// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("enter number:");
//         scanf("%d",&n);
//     }   
//     while(n%7!=0);
// }

// #include<stdio.h>
// int main(){
//     for (int i = 5; i <= 50; i++){
//         if(i%2 !=0){
//             printf("%d \n",i);
//         }
//     }
//     return 1;
// }

// #include<stdio.h>
// int main(){
//     int i,n,k=1;
//     printf("enter number:");
//     scanf("%d",&n);
//     for(i = 1; i <= n ; i++){
//         k*=i;
//     }
//     printf("%d",k);
//     return 1;
// }

// #include <stdio.h>
// int main(){
//     int i ,n;
//     printf("enter number:");
//     scanf("%d",&n);
//     for (i=12;i>=1;i--){
//         printf("%d \n",n*i);
//     }
//     return 1;
// }

#include<stdio.h>
int main(){
    int i , j;
    for (i=0;i<=3;i++){
        for (j=0;j<=4;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 1;
}