#include<stdio.h>

int main(){
    int i,j,a,b;    //declaration of all variables of similar datatype can be done in a single line
    printf("enter two values \n");
    scanf("%d",&i);    //scanf() function is used to take input value from the user
    scanf("%d",&j);
    scanf("%d %d",&a,&b);     // more than one input can be provided by the user using a single scanf() function
    // ampersand(&) symbol defines the address of the variable passed in scanf() function
    // "%d" defines the integer datatype of the input value entered by the user
    printf("value of i is: %d \n",i);
    printf("value of j is: %d \n",j);
    printf("value of j is: %d \n",a);
    printf("value of j is: %d",b);
    // if no value is assigned to the variable then a garbage value of the declared datatype is assigned to it by the compiler  
    
}
// if a value of other datatype is entered by the user to a variable of specified datatype no error will occur.
// the compiler will allot a garbage value to the variable