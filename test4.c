#include<stdio.h>
int main(){
    int num , i , k=0;
    printf("enter number:");
    scanf("%d",&num);
    if (num == 2){
        printf("The number is Prime!");
    }

    else if (num == 0 || num ==1)
    {
        printf("Niether Prime Nor Composite");
    }
    
    // else if (num == 1)
    // {
    //     printf("Neithe Prime Nor Composite");
    // }
    

    else{
        for (i=2 ; i<num ; i++){
            if (num%i == 0){
                k+=1;
            }
        }
        if (k>=1){
            printf("It is not a Prime Number!");
        }
        else{
            printf("It is a Prime Number");
        } 
    }
    return 1;
}