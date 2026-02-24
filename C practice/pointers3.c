#include <stdio.h>

int* sumF(int* num1, int* num2, int* sum){


  *sum = *num1 + *num2;
  return sum;

}

int main(){

    int number1 = 32;
    int number2 = 35;
    int sum;


    sumF(&number1, &number2, &sum);

    printf("%d",sum);




    return 0;
}