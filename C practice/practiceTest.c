#include <stdio.h>
#include <string.h>

// 1. Start the user with a balance of $1000
// 2. Show a menu with 3 options: check balance, deposit, and withdraw
// 3. Let the user pick an option and do the action
// 4. After each action, show the updated balance and ask if they want to do something else
// 5. If they try to withdraw more than their balance, print an error message instead of going negative
// 6. Option to quit the program

int main(){

    double bal = 1000;
    double balAdd;
    char withdraw[]="withdraw";
    char deposit[]="deposit";
    char choice[50];

    while (1)
    {
        printf("Your balance is $%.2lf twin.\n Do you wanna deposit or withdraw money? or leave and make me sad :( : ",bal);
        fgets(choice, sizeof(choice),stdin);
        printf("%d\n",strlen(choice));
        // if (strlen(choice)==8)
        {
            printf("How much u wanna deposit\n");
            scanf("%lf",&balAdd);
            bal = bal+balAdd;
        }
        if (strlen(choice)==9)
        {
            printf("with\n");
            scanf("%lf",&balAdd);
            bal = bal-balAdd;
        }
        else
        {
            break;
        }
        
        
    }
    


    return 0;
}