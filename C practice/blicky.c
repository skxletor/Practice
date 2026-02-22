#include <stdio.h>

int main(){


    char oppyDay; //+ - * or /
    int num1;
    int num2;
    int ans;

    printf("+ - * or /\n");
    scanf("%c",&oppyDay);

    printf("what is num 1\n");
    scanf("%d",&num1);

    printf("what is num 2\n");
    scanf("%d",&num2);


    switch (oppyDay)
    {
    case '+':
        ans =(num1 + num2);
        printf("%d", ans);
        break;

    case '-':
        ans =(num1 - num2);
        printf("%d", ans);
        break;
    
    case '*':
        ans =(num1 * num2);
        printf("%d", ans);
        break;

    case '/':
        ans =(num1 / num2);
        printf("%d", ans);
        break;
    
    default:
        printf("fuh oyu");
        break;
    }
    





















    // int number;

    // printf("number pls guys 1-7 \n");

    // scanf("%d",&number);


    // switch (number)
    // {
    // case 1:
    //     printf("sdunday");
    //     break;

    // case 2:
    //     printf("mundee");
    //     break;
    // case 3:
    //     printf("tusdee");
    //     break;
    // case 4:
    //     printf("wensday");
    //     break;
    // case 5:
    //     printf("thursdee maybe");
    //     break;
    // case 6:
    //     printf("friday funday");
    //     break;
    // case 7:
    //     printf("SIX SEVENN");
    //     break;
    
    // default:
    //     printf("follow the rules assholle");    
    // break;
    // }



    return 0;
}