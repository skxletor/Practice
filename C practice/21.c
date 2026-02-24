#include <stdio.h>
#include <string.h>

int main(){

    char wrld[]= "fuck programiz";
    char wwow[]= " ikr";

    // fgets(wrld, sizeof(wrld),stdin);


    // printf("%zu ",strlen(wrld));
    // printf("%zu",sizeof(wrld));

    // for (size_t i = 0; i < strlen(wrld); i++)
    // {
    //     printf("%c\n",wrld[i]);
    // }


    strcat(wrld,wwow);
    printf("%s",wrld);
    


    return 0;
}