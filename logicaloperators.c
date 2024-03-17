#include<stdio.h>

int main(){
    
    int result = 3==4 || 3>1;   //using 'OR' operator
    printf("%d \n",result);

    int result2 = 4>5 && 8<9;   //using 'AND' operator
    printf("%d \n",result2);

    int result3 = !(10==11);    //using 'NOT' operator
    printf("%d",result3);
}
// '&&' is 'AND' operator
// '||' is 'OR' operator
// '!'  is 'NOT' operator