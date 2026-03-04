#include <stdio.h>

int main(){

    FILE* fptr;

    char messageForU[500];

    fptr = fopen("ILOVEC2.txt", "w");
    if (fptr != NULL){
        // while(fgets(messageForU,500,fptr)){
        //     printf("%s",messageForU);
        // }
        printf("\nyay");
        for (size_t i = 0; i < 50; i++)
        {
            fprintf(fptr,"this is probably line %d\n",i+1);
        }
        

    }
    else{

        printf("boo");
    }
    
    fclose(fptr);
    return 0;
}