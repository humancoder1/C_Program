// // ques1
// #include <stdio.h>
// void print_String(char str[]);
// int main (){
//     char firstname[] = "manas";
//     char lastname[] = "jha";
//     print_String("manas");
//     print_String(lastname);
// }
// void print_String(char str[]){
//     for( int i = 0; str[i] != '\0' ; i++){
//         printf("%c",str[i]);
//     }
//     printf("\t");
// }

// //ques2
// #include<stdio.h>
// void string_Length(char str[]);
// int main(){
//     char string1[100];
//     fgets(string1,100,stdin);
//     string_Length(string1);
// }
// void string_Length(char str[]){
//     int count = 0;
//     for(int i = 1 ; str[i] != '\0' ; i++){
//         count++ ;
//     }
//     printf("length of string is : %d", count);
// }

// //ques3
// #include<stdio.h>
// int main (){
//     char name[100];
//     char ch;
//     int i = 0;
//     while(ch != '\n'){
//         scanf("%c",&ch);
//         name[i] = ch;
//         i++;
//     }
//     name[i] = '\0';
//     puts(name);
// }

// // ques4
// #include<stdio.h>
// #include<string.h>
// void salting(char str[]);
// int main(){
//     char password[100];
//     char salt[] = "123";
//     // char newPass[200];
//     // fgets(password,100,stdin);
//     // using fgets() for string input gives output in next line
//     /*namaste
//       123*/ 
//     scanf("%s",&password); 
//     // strcpy(newPass , password);
//     // strcat(newPass , salt);
//     salting(password);  
// }
// void salting(char str[]){
//     char newPass[200];
//     char salt[] = "123";
//     strcpy(newPass , str);
//     strcat(newPass , salt);
//     puts(newPass);
// } 

// //ques 5
// #include<stdio.h>
// void string_Slice(char str[], int index1, int index2);
// int main(){
//     char string1[200];
//     scanf("%s",string1);
//     int num1 , num2;
//     printf("enter starting index :");
//     scanf("%d",&num1);
//     printf("enter ending index :");
//     scanf("%d",&num2);
//     string_Slice(string1, num1 ,num2);
// }
// void string_Slice(char str[], int index1 , int index2){
//     for (index1 ; index1<=index2 && str[index1] != '\0'; index1++){
//         printf("%c",str[index1]);
//     }
//     printf("\n");
// }

// // ques 6
// #include <stdio.h>
// #include<string.h>
// int count_Vowel(char str[]);
// int main(){
//     char string1[200];
//     scanf("%s", string1);
//     int ans = count_Vowel(string1);
//     printf("number of vowels in the string is %d",ans);
// }
// int count_Vowel(char str[]){
//     int count = 0;
//     char vowels[] ={'a','e' ,'i' ,'o','u'};
//     for (int i = 0 ; i<strlen(str) ; i++){
//         // for (int j = 0 ; j < 5 ; j++){
//             if (str[i] == 'a' || str[i] == 'e' || 
//             str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//                 count += 1;
//             }
//         // }
//     }
//     return count;
// }

// // ques7
// #include <stdio.h>
// void check_Char(char str[]);
// int main(){
//     char string1[] = "hello";
//     check_Char(string1);
//     // char key = 'h' ;
//     // int count = 0;
//     // for(int i = 0 ; string1[i] != '\0' ;i++){
//     //     if (string1[i] == key){
//     //         count++;
//     //         printf("character is present in the given string");
        
//     //     }
//     // if (count == 0){
//     // printf("character is not present in the given string");
//     // }
//     // }
// }
// void check_Char(char str[]){
//     char key = 'h' ;
//     for(int i = 0 ; str[i] != '\0' ; i++){
//         if (str[i] == key){
//             printf("the character is present in the given string");
//             return;
//         }
//     printf("the character is not present in the given string");
//     }
// }

// //HW ques1
// #include<stdio.h>

// char convert_Vowels(char str[]);

// int main(){
//     char string1[200] ;
//     printf("enter the string:");
//     scanf("%s",&string1);
//     convert_Vowels(string1);
//     printf("%s",string1); 
//     /* the value of the original string is also changing in the main() function
//     because we passed string1 in the convert_Vowels function as a pointer
//     string is char array and array itself is pointer*/
// }
// char  convert_Vowels(char str[]){
//     char lower_vowels[] = {'a','e','i','o','u'};
//     // char upper_vowels[] = {'A','E','I','O','U'};
//     for(int i = 0 ; str[i] != '\0'; i++){
//         for (int j = 0 ; j < 5 ; j++){
//             if (str[i] == lower_vowels[j]){
//                 // str[i] = upper_vowels[j];
//                 str[i] -= 32;
//             }
//         }
//     }
//     return *str;
//     // printf("the new string is: %s \n" , str);
// }

// HW ques2
#include<stdio.h>
#include<string.h>
int main (){
    char string1[20] = "abcdaac";

}


// //HW ques3
// #include<stdio.h>
// #include<string.h>
// int main(){
//     char string1[] = "hello world hello";
//     printf("%d \n", strlen(string1));
//     for(int i = 0 ; string1[i] != '\0' ; i++){
//         if(string1[i] == ' '){
//             for(int j = i ; j < strlen(string1) ; j++){
//                 string1[j] = string1[j+1];
//             }
//         }
//     }
//     printf("%s \n" , string1);
//     printf("%s \n",string1[strlen(string1)]);
//     printf("%d " , strlen(string1));
// }

// //HW ques4
// #include<stdio.h>
// void convert_String(char str[]);

// int main(){
//     char string1[200] ;
//     scanf("%s" , &string1);
//     convert_String(string1);
//     // printf("%s", ans);
// }

// void convert_String(char str[]){
//     for(int i = 0 ; str[i] != '\0' ; i++){
//         if (str[i] >= 97 && str[i] <= 122) // for lowercase to uppercase coversion
//         {
//             str[i] -= 32;
//         } 

//         else if(str[i] >= 65 && str[i] <=90) // for uppercase to lowercase conversion
//         {
//             str[i] += 32;
//         } 
//     }
//     printf("%s",str);
// }