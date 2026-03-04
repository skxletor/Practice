#include <stdio.h>

int main(){

    FILE* fptr;

    fptr = fopen("ILOVEC.txt", "r");
    if (fptr != NULL)
    {
        printf("yay");

    }
    else{

        printf("boo");
    }
    

    return 0;
}