#include <stdio.h>

int main(){

    int grades[5];
    int gradeTot = 0;
    printf("input grades tard: ");

    for (size_t i = 0; i < 5; i++)
    {
        scanf("%d",&grades[i]);
    }
    for (size_t i = 0; i < 5; i++)
    {

        gradeTot = gradeTot + grades[i];
    }  

    int avg = gradeTot/5;
    printf("%d", avg);


    return 0;
}