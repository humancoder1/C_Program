/*Using nested [for loop] and printing star pattern(very very basic one)*/
#include<stdio.h>
int main(){
    int i ,j ;
    for(i = 0;i<5;i++)
    {
        for(j = 0;j>-5;j--)
        {
            printf("* ");
        }printf("\n");
    }
    return 1;
}