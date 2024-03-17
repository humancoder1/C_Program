#include<stdio.h>
#include<string.h>
struct prolang{
    char name [20];
    char use [20];
};

void print_Info(struct prolang var1){
    printf("Programming language is %s \n" , var1.name);
    printf("Use for : %s\n" , var1.use);
}

void print_struct(struct prolang *point){
    printf("Programming language : %s \n" , point->name);
    printf("USE : %s \n" , point->use);
    strcpy(point->use , "Data Analysing"); 
}

int main(){
    // Call By Value:-
    struct prolang lang1;
    strcpy(lang1.name , "C++");
    strcpy(lang1.use , "Problem Solving"); 
    print_Info(lang1);
    printf("\n");

    // Call By Reference:-
    struct prolang lang2;
    struct prolang *ptr = &lang2;
    strcpy((*ptr).name , "Python");
    strcpy((*ptr).use , "Machine Learning");
    print_struct(ptr);
    printf("Use : %s", lang2.use);

    return 0;
}