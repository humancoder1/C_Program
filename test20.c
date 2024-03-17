#include<stdio.h>
#include<string.h>
struct student
{
    char name[20];
    int roll_no ; 
    float cgpa ;
};

int main(){
    struct student s1;
    strcpy(s1.name , "Paras");
    s1.roll_no = 101 ;
    s1.cgpa = 10.00;

    printf("Name of student : %s \n" , s1.name);
    printf("Roll No. of student : %d \n" , s1.roll_no );
    printf("CGPA of student : %f \n" , s1.cgpa); 

    struct student s2 ;
    strcpy(s2.name , "Dhruval");
    s2.roll_no = 102;
    s2.cgpa = 10.0 ;

    printf("Name of student : %s \n",s2.name );
    printf("Roll No. of student : %d \n" , s2.roll_no);
    printf("CGPA of student %f \n" , s2.cgpa);
}