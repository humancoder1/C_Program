#include<stdio.h>
struct Laptops {
    char name[20];
    int model_no;
    float price;
};

int main(){
    struct Laptops laptop1 = {"Latitude" , 5410 , 10.000};
    struct Laptops *ptr;
    ptr = &laptop1;

    // using dot(".") operator to access values of individual fields for the structure variable
    printf("Laptop is : %s \n" , (*ptr).name) ;
    printf("Laptop Model No. is : %d \n" , (*ptr).model_no);
    printf("Laptop price is : %f \n" , (*ptr).price );  
    // pointer ('ptr') stores the address of the structure variable 'laptop1'
    // ('*ptr') points to the structure variable 'laptop1' thus it refrence to {"Latitude" , 5401 , 10.000}
    // so to access individual field  we write (*ptr).<field_name>
    // writing *ptr.<field_name> considers operation as -> *(ptr.<field_name>) which is incorrect

    printf("\n");

    // using arrow("->") operator with the pointer to access the individual fields for the structure variable
    printf("Laptop is : %s \n"  , ptr -> name);
    printf("Laptop Model No. is %d \n", ptr -> model_no);
    printf("Laptop price is %f \n" , ptr -> price);

    return 0 ;
}