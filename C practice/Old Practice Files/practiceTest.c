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
    double balDiff;
    char choice[50];

    while (1)
    {
        printf("Your balance is $%.2lf twin.\n",bal);
        printf("Do you wanna deposit or withdraw money? or stop: ");
        fgets(choice, sizeof(choice),stdin);
        
        if (strcmp(choice,"deposit\n")==0)
        {
            printf("How much u wanna deposit: ");
            scanf("%lf",&balDiff);
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}
            bal = bal+balDiff;
        }
        else if (strcmp(choice,"withdraw\n")==0)
        {
            printf("how much to withdraw: ");
            scanf("%lf",&balDiff);
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {}


            if (balDiff>bal)
            {
                printf("fuck u greedy \n");
            }
            else{
                bal = bal-balDiff;
            }
        }
        else if (strcmp(choice,"stop\n")==0)
        {
            printf("bye");
            break;
        }
        else{
            printf("fuck you thats not an answer\n");

        }
        
        
    }
    


    return 0;
}