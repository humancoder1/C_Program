#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main(){
    FILE *fptr ;
    fptr = fopen("C:\\Users\\dell\\Documents\\file1.txt" , "a+");
    if(fptr == NULL){
        printf("unable to open");
        exit(0);
    }

    char val[] = "HOlA AMIGOasfihwifhuwkea jodhkaefdiewl feuodeiowqjdnickekui \n";
    // fprintf(fptr , "%s" , val);
    // fprintf(fptr, "%s" , val);
    // fputc('\n' , fptr);
    // fputc('h',fptr);
    fputs(val , fptr);
    fputs(val , fptr);
    // for(int i = 0 ; val[i] != '\0' ; i++){
        // fprintf(fptr , "%c" , val[i]);
    // }
    // char val1[200];
    // // fscanf(fptr,"%s",&val1);
    // fgets(val1 , 10 ,fptr);
    // for(int i = 0 ; val1[i] != '\0' ; i++){}
    //     printf("%s" , val1);
    // }
    // fscanf(fptr,"%s",&val);
    // printf("%s" , val);
    // fscanf(fptr,"%s",&val);
    // printf("%s" , val);
// the current position of the pointer , updates the position of the pointer and returns the read character
    char file_char = fgetc(fptr); 
    printf("%s" , file_char);
    for(int i = 0 ; file_char != EOF ; i++){ // EOF-> represents END OF FILE
        file_char = fgetc(fptr);
        printf("%c" , file_char);
    }

    fclose(fptr);
    return 0 ;

}