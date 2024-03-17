#include<stdio.h>
// using switch keyword
int main(){
    int i =2;
    switch (i)
    {
    case 0/* constant-expression */:
        printf("Zero \n");/* code */
        break;      // break is used to break the code
    case 1:
        printf("One \n");
        break;
    case 2:
        printf("Two \n");
        break;
    case 3:
        printf("Three \n");
        break;
    default:        //default act like else statement in if-else statement 
        printf("not valid input");
        break;
    }
}