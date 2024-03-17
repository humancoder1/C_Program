#include<stdio.h>
#include<string.h>
union information{
    int num;
    char name[4];
} inform1 ;

typedef union information info;
int main(){
    inform1.num = 512;
    strcpy(inform1.name,"abc");
    printf("%d\n" , inform1.num);
    printf("%s\n" , inform1.name);
    printf("%c\n" , inform1.name[0]);
    printf("%d\n" , inform1.name[1]);
    printf("%d\n" , inform1.name[2]);
    printf("%d\n" , inform1.name[3]);


    // printf("%s\n" , inform1.name);
    // printf("%s\n" , inform2.name);
    return 0;
}
