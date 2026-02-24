#include <stdio.h>

int main(){

    char wrld[]= "fuck progtramiz";

    // fgets(wrld, sizeof(wrld),stdin);


    for (size_t i = 0; i < sizeof(wrld); i++)
    {
        printf("%c\n",wrld[i]);
    }
    


    return 0;
}