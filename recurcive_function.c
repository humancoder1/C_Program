// pow(x,n)
#include <stdio.h>
double myPow(double x ,int n);
int main() {
    // Write C code here
    double value = myPow(2.0000,10);
    printf("%f",value);
    return 0;
}
double myPow(double x, int n){
    if (n == 1){
        return x;
    }
    else if (n == -1){
        return (1/x);
    }
    if (n>0){
        x=x*myPow(x,n-1);
        return x;
    }
    else{
        x=1/((1/x)*myPow(x,n+1));
        return(1/x);
    }
}