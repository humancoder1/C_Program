#include<stdio.h>
void elements(char array[]);

int main(){
    char string[] = "abcdeaghaija" ;
    int count_array [] = {};
    elements(string);

}

void elements(char str_array[]){
    char char_array [] = {};
    for(int i = 0 ; str_array[i] = '\0' ; i++){
        for(int j = 0 ; str_array[i] == '\0' ; j++){
            if (str_array[i] == char_array[j]){
                continue;
            }
            else{
                char_array[j] = str_array[i];
            }
            
        }
    }
    // for(int k = 0 ; k<)
}