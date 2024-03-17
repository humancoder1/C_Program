#include <stdio.h>
typedef struct Computer_Engineering_Student
{
    int roll_no;
    char name[20];
    float cgpa;
} coe; // here 'coe' is not a variable, it is a name given to structure Computer_Engineering_Student using typedef keyword.

coe *ptr_coe; // here 'ptr_coe' is a pointer of


int main()
{
    coe student1 = {1, "Manas", 9};
    coe student2 = {2, "Paras", 9};
    coe student3 = {3, "Pushkar", 9};
    coe student4 = {4 , "Kartik" , 9};
    coe student5;
    // student5 = {5, "Yash" , 9};
    ptr_coe = &student3;
    

    coe student_list[] = {student1, student2, student3};
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", student_list[i].roll_no);
        printf("%s ", student_list[i].name);
        printf("%f ", student_list[i].cgpa);
        printf("\n");
    };

    printf("%d" , ptr_coe->roll_no);
    return 0;
}