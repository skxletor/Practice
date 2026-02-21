#include <stdio.h>
#include <stdbool.h>

int main(){

    int a = 21;
    int b = 222;

    bool value = !(a>b);

    int c = (value);

    if (c == 0)
    {
        printf("fake");
    }
    else if (c == 1)
    {
        printf("wow true");
    }
   





    return 0;
}