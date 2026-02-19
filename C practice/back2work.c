#include <stdio.h>


int main(){


    double retardNumber;
    char retardChar;

    printf("gimme a retearded number thne character \n");
    scanf("%lf %c", &retardNumber, &retardChar);



    printf("retard = %.0lf%c",retardNumber, retardChar);
    return 0;
}