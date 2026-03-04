#include <stdio.h>

int main(){

    FILE* fptr;

    char messageForU[500];

    fptr = fopen("ILOVEC.txt", "r");
    if (fptr != NULL){
        fgets(messageForU,500,fptr);
        printf("%s",messageForU);
        printf("\n\nyay");

    }
    else{

        printf("boo");
    }
    

    return 0;
}