#include <stdio.h>


int main(){


    double retardNumber;
    char retardChar;

    printf("gimme a retearded number ");
    scanf("\n%lf", &retardNumber);

    printf("gimme a retarded character ");
    scanf("\n%c", &retardChar);


    printf("retard = %.0lf%c",retardNumber, retardChar);
    return 0;
}