#include <stdio.h>

void sumF(int* num1, int* num2){


    int sum = *num1 + *num2;
    *num1 = sum;
    *num2 = sum;



}

int main(){

    int number1 = 32;
    int number2 = 35;


    sumF(&number1, &number2);



    printf("%d, %d", number1, number2);


    return 0;
}