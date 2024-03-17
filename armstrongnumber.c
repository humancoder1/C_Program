#include<stdio.h>
#include<math.h>
void check_armstrongnumber(int num );
int check_digit_num(int number);

int main(){
    int input_num;
    // ,digit1,digit2,digit3;
    // int sum;
    printf("enter number:");
    scanf("%d",&input_num);
    check_armstrongnumber(input_num);
    // digit1 = number/100;
    // digit2 = (number/10)%10;
    // digit3 = number%10;

    // sum= pow(digit1,3) + pow(digit2,3) + pow(digit3,3);

    // if (sum == number){
    //     printf("The number is an armstrong number");
    // }
    // else{
    //     printf("It is not an armstrong number");
    // }
}
int check_digit_num(int number){
    int count = 0;
    while(number){
        number = number / 10;
        count++;
    }
    return count ;
}

void check_armstrongnumber(int num){
    int digit_n = check_digit_num(num);
    int temp_num = num ;
    float new_num = 0;
    while(temp_num){
        int ans = temp_num%10;
        new_num += pow(ans , digit_n); 
        temp_num /= 10;
    }
    if (new_num == num){
        printf("It is ArmstrongNumber");
    }
    else{
        printf("It is normal Number");
    }
}