//using printf() function without adding ';' at end of line  
#include<stdio.h>
#define x printf("hello world \n")  // first way

int main(){
    x;
    if(printf("Hello world")) // second way
    {
        //if gets value as 1 when printf() function prints something
    }
}