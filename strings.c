// #include<stdio.h>
// int main(){
//     char name1[] = {'h','e','l','l','o','\0'};
//     char name2[] = "hello world \0";
//     printf("%s \n",name1);
//     printf("%s",name2);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     char name[] = "hello";
//     for(int i = 0; name[i] != '\0' ; i++){
//         printf("%c",name[i]);
//         printf("\n");
//     }
// }

// #include <stdio.h>
// int main(){
//     char name[20];
//     scanf("%s",name);
//     printf("your name is: %s",name);
// }

#include<stdio.h>
#include<string.h>
int main(){
    char string1[] = "Call";
    char string2[] = "Aall";
    // fgets(str1,100,stdin);
    // int length = strlen(str1);
    // printf("%lu", length);
    // int ans = 
    // puts(str1);
    printf("%d",strcmp(string1 , string2));
}