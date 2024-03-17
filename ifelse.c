#include<stdio.h>
/*if else statement is a branching statement which is for checking the condition*/
void condition(){
    int a=10, b=20, c=30;
    if (a>b && a>c)     // if a>b and a>c both conditions are True then only the if statement block will execute
    {
        printf("%d is the greatest",a);
    }
    else if (b>c) //if the above 'if' condition is False then this 'else if' statement block will execute
    {
        printf("%d is the greatest",b);

    }
    else        //if both the above 'if' and 'else if' statement are False then the 'else' statement block will execute
    {
        printf("%d is the greatest",c);
    }
}

int main(){
    int i = 20;
    if (i>10) //condition
    { 
      printf("%d is greater than 10",i); /* if the above condition is True 
                then the code(statement) written in the curley brackets i.e. the block will execute*/  
    }
    
    else if(i>30)
    {
        printf("%d is greater than 30",i);   /*if the above 'if' condoion becomes False
                then the code written in the else if condition i.e. block of else if statement will be executed */
    }
    else
    {
        printf("%d is lesser than 10",i);   /* if the 'if'and 'else if' both condition will be False 
                        then the code written in the else statement i.e. block of else statement will execute */
    }
 
}