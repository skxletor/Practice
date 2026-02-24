#include <stdio.h>

//holy shit the first actual C concept im shook

int main(){


    int num = 25;

    int* ptr = &num;

    // printf("%p",ptr);

    // printf("\n%d",*ptr);

    *ptr = 2121;

    printf("%d",num);





    return 0;
}