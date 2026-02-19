#include <stdio.h>


int main(){


    double retardNumber;
    char retardChar;

    printf("gimme a retearded number\n ");
    scanf("%lf", &retardNumber);

    printf("gimme a retarded character ");
    scanf("%c", &retardChar);


    printf("retard = %c + %lf",retardChar, retardNumber);
    return 0;
}