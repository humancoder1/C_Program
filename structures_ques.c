#include<stdio.h>
#include<string.h>
struct student_struct{
    char name[100];
    int roll_no;
    int class;
};

struct address{
    int house_no;
    int block ;
    char city[20];
    char state[20];
};

typedef struct address add;

typedef struct vector{
    int x;
    int y;
} vect ;

typedef struct complex{
    int real;
    int img;
} comp;

void print_ADDRESS(add list1[] , int n){
    for(int j = 0 ; j < n ; j++){
        printf("house no. : %d" , list1[j].house_no);
        printf("block : %d" , list1[j].block);
        printf("city : %s", list1[j].city);
        printf("state : %s" , list1[j].state);
        printf("\n");
        };
};
vect add_vector(vect v1 , vect v2 ){
    vect sum_V;
    sum_V.x = v1.x + v2.x;
    sum_V.y = v1.y + v2.y;
    return sum_V;
}

int main(){
    add address_list[2];
    //input
    // for (int i = 0 ; i < 2 ; i++){
    //     printf("enter you house no. : ");
    //     scanf("%d" , &address_list[i].house_no);
    //     printf("enter your block : ");
    //     scanf("%d" , &address_list[i].block);
    //     printf("enter the city : ");
    //     scanf("%s" , &address_list[i].city);
    //     printf("enter the state : ");
    //     scanf("%s" , &address_list[i].state);
    // }
    // struct vector vect1 = {1 , 1};
    // struct vector vect2 = {10 , 10};
    // struct vector sum = add_vector(vect1 , vect2);

    // printf("X_CORD : %d " , sum.x);
    // printf("Y_CORD : %d " , sum.y);
    

    comp num1 = {1 , 10};
    comp *ptr = &num1;
    printf("Real part of the number : %d \n" , ptr->real);
    printf("Imaginary part of the number : %d \n" , ptr->img);

    
    return 0;
}