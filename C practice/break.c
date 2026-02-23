#include <stdio.h>


void greetingsTwin(char test[]){

    printf("thank you %s\n", test);
}

int main(){

    char name[]= "vro";
    greetingsTwin(name);
    greetingsTwin(name);



    return 0;
}