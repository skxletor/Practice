#include <stdio.h>

// 1. Start the user with a balance of $1000
// 2. Show a menu with 3 options: check balance, deposit, and withdraw
// 3. Let the user pick an option and do the action
// 4. After each action, show the updated balance and ask if they want to do something else
// 5. If they try to withdraw more than their balance, print an error message instead of going negative
// 6. Option to quit the program

int main(){

    double bal = 1000;
    char withdraw[]="withdraw";
    char deposit[]="deposit";
    char choice[50];

    printf("Your balance is %lf twin.\n Do you wanna deposit or withdraw money? or leave and make me sad :(",bal);
    scanf("%s",&choice[50]);

    return 0;
}