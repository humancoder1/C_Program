#include<stdio.h>
#include<string.h>

// defining structure Student Data Type.
struct Student{
    char name[100];
    int roll_no ;
    float c_gpa;
};

// defining structure Employee Data Type.
struct Employee{
    char name[20];
    int employee_id;
    float salary;
}emp1 , emp2 ,emp3;

//defining a structure withoud a structutre name.
struct {
    char f_name[20];
    char l_name[20];
    int i_d ;
}person1 = {"Manas" , "Jha" , 2212130};

int main(){
    //using Student structure data type
    struct Student s1;
    // s1.name = "Hello"; // this gives an error bcoz string in the structure is defined using array notation
    // and string defined with array notation cannot be changed or modified. 
    strcpy(s1.name , "Hello");
    s1.roll_no = 1;
    s1.c_gpa = 10.0;
    printf("name : %s \n" , s1.name);
    printf("roll no. : %d \n" , s1.roll_no);
    printf("cgpa : %f \n" , s1.c_gpa);
    printf("\n");
    

    // memory locations for structure Student data type.
    printf("address of s1.name : %d \n" , &s1.name);
    printf("address of s1.roll_no : %d \n" , &s1.roll_no);
    printf("address of s1.c_gpa : %d \n " , &s1.c_gpa);
    printf("\n");

    //using employee structure data type
    strcpy(emp1.name,"Hi");
    printf("employee name : %s\n" , emp1.name);
    
    // emp2 = {102 , "Hey" , 100000}; this can only be done when the variable is declared with Structutre data type seperately; 
    struct Employee emp4 = {"Shri", 104 , 200000 }; // the values should be initialized in the same order the members are defined.
    printf("name : %s \n" ,emp4.name);
    printf("\n");

    printf("first_name : %s \n last_name : %s \n student_id : %d \n" , person1.f_name , person1.l_name , person1.i_d);

    return 0;
    
}