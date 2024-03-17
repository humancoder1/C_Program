#include<stdio.h>

int main(){
    int i=4,j=2,k,l=1;
    i++;        // ++ means incrementation in value by 1
    j--;        // -- means decrementation in value by 1
    
    // k = i++; //is Post increment in which the compiler will first fetch the value of variable(i.e. i) and then will increment
    // this results into value of k as 4
    // k = ++i; //is pre increment in which compiler first increment the value and then assign the value
    //  this results into value of k as 5
    printf("%d \n",i);        
    // printf("%d \n",j);
    // printf("%d \n",k);
    
    l=l++;      // this will result to 1 instead of resulting to 2
    printf("%d",l);
    //this is beacause of the code execution
    // l++ is first fetching the initial value of l and then incremeneting it by 1
    //the execution of the above operation is like this:-
        // let temp is a variable
        // temp = l;
        // l++;
        // l=temp;
    
    return 0;

}