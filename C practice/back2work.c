#include <stdio.h>


int main(){

//idk why tf its called double
    double retardNumber;
    char retardChar;

    printf("gimme a retearded number thne character \n");
    scanf("%lf %c", &retardNumber, &retardChar);


//uhhh this line makes the inputs do something probasbly
    printf("retard = %.0lf%c",retardNumber, retardChar);
    printf("\nwhat %.0lf", retardNumber);
    return 0;
}