#include<stdio.h>
#include<string.h>

struct students{
    char name[20];
    int roll_no ;
    float cgpa ; 
};


int main(){

    struct students Student_list1[2] ; //Array of Structure
    
    strcpy(Student_list1[0].name , "Dhruval" );
    Student_list1[0].roll_no = 101 ;
    Student_list1[0].cgpa =  10;

    strcpy(Student_list1[1].name , "Paras" );
    Student_list1[1].roll_no = 102 ;
    Student_list1[1].cgpa =  10;

    // Student_list1[1] = {"Paras" , 102 , 10};
    // Student_list1[2] = {"Manas" , 103 , 10};
    // Student_list1[3] = {"Kartik" , 104 , 10};
    // Student_list1[4] = {"Pushkar" , 105 , 10};
    // Student_list1[5] = {"Yash" , 106 , 10} ;
    // Student_list1[6] = {"Sankalp" , 107 , 10};

    // here we are simply accessing the members of the structure using "."operator
    for(int  i = 0 ; i < 2 ; i++){
        printf("name : %s ; roll_no : %d ; cgpa : %f" , Student_list1[i].name , Student_list1[i].roll_no ,Student_list1[i].cgpa);
        // ptr++;
        printf("\n");
    }

    struct students student1 = {"Dhruval" , 101 , 10};
    struct students student2 = {"Paras" , 102 , 10};
    struct students student3 = {"Manas" , 103 , 10};
    struct students student4 = {"Kartik" , 104 , 10};
    struct students student5 = {"Pushkar" , 105 , 10};
    struct students student6 = {"Yash" , 106 , 10} ;
    struct students student7 = {"Sankalp" , 107 , 10};

    struct students Student_list2[] ={student1 , student2 , student3 , student4 , student5 ,student6 ,student7}; //Array of Structure

    // accessing the members values using pointer
    // with pointer we use '->' operator to access the members of the structure data type 
    struct students *ptr ;
    ptr = &student1;
    printf("Student cgpa : %f " , (*ptr).cgpa );// *ptr represents the whole value of 'student1' variable i.e. {"Dhruval" , 101 , 10.00}
    // so to access the the 'roll_no' field of the 'student1' variable we write (*ptr).cgpa
    // *ptr.cgpa will consider this as the operation --> *(ptr.cgpa) 

    // for(int j = 0 ; j < 3 ; j++){
        // printf("name : %s ; roll_no : %d ; cgpa : %f " , *ptr->name ,*ptr->roll_no  );
    // }
}