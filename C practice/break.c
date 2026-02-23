#include <stdio.h>
#include <math.h>



void greetingsTwin(char test[]){

    printf("thank you %s\n", test);
}

int fuhYouTwin(int num1, int num2){

    int uhh = num1 * num2;
    return uhh;

}

int main(){

    char name[]= "vro";
    greetingsTwin(name);
    greetingsTwin(name);

    int uhhh = fuhYouTwin(6,7);
    printf("%d",uhhh);

    return 0;
}