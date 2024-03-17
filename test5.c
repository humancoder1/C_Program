// #include<stdio.h>
//  void printNamaste();
//  void printBonjour();

// int main(){
//     char letter;
//     printf("tell the country:");
//     scanf("%c",&letter);
//     if (letter == 'f'){
//         printBonjour();
//     }
//     else if (letter == 'I' || letter == 'i'){
//         printNamaste();
//     } 
// }

// void printNamaste(){
//     printf("Namaste");
// }
// void printBonjour(){
//     printf("Bonjour");
// }

// #include<stdio.h>
// void printTable();

// int main(){
//     int num;
//     printf("enter any number:");
//     scanf("%d",&num);
//     printTable(num);
// }

// void printTable(int n){
//     for (int i = 1;i <= 12;i++){
//         printf("%d \n",i*n);
//     }
// }
// #include<stdio.h>
// int main(){
//     int num;
//         scanf("%d",&num);
//         if (num == 1){
//             printf("one");
//         }
//         else if (num == 2) {
//             printf("two");
//         }
//         else if (num == 3){
//             printf("three");
//         }
//         else if (num == 4){
//             printf("four");
//         }
//         else if (num == 5){
//             printf("five");
//         }
//         else if (num == 6){
//             printf("six");
//         }
//         else if (num == 7){
//             printf("seven");
//         }
//         else if (num == 8){
//             printf("eight");
//         }
//         else if (num == 9){
//             printf("nine");
//         }
//         else{
//             printf("Greater than 9");
//         }
// }

// #include <stdio.h>

// float squareArea(float n);
// float circleArea(float r);
// float rectangleArea(float l, float b);

// int main(){
//     // float area1, area2 ,area3;

//     // area1 = squareArea(4);
//     printf("%f \n",squareArea(4));

//     // area2 = circleArea(5);
//     printf("%f \n",circelArea(5));

//     // area3 = rectangleArea(4,5)
//     printf("%f",rectangleArea(4,5));

//     return 1;
// }

// float squareArea(float n){
//     return n*n ;
// }

// float circleArea(float r){
//     return (3.14*r*r);
// }

// float rectangleArea(float l,float b){
//     return (l*b);
// }
// #include <stdio.h>

// int fact(int num);

// int main(){
//     printf("%d",fact(5));
//     return 1;
// }

// int fact(int num){
//     int i , k = 1;
//     for (i = num;i >= 1;i--){
//         k = k*i;
//     }
//     return k;
    
// }

//convert celcius to  fahrenheit 
// #include<stdio.h>
// float fahrenTemp(float celtemp);
// int main(){
//     printf("%f",fahrenTemp(0));
//     return 1;
// }

// float fahrenTemp(float celtemp1){
//     float temp;
//     temp = ((celtemp1*9.0)/5.0) + 32;
//     return temp;
// }


#include<stdio.h>
float calPercent(int marks1, int marks2, int marks3);

int main(){
    int math = 90, science =98 , sanskrit =90;
    printf("percentage is %f",calPercent(math , science , sanskrit));
    return 1;
}

float calPercent(int marks1,int marks2, int marks3){
    return ((marks1+marks2+marks3)/3);
}