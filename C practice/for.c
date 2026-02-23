#include <stdio.h>

int main(){

    int factorial;
    int j=1;
    printf("what num do u wanna factorialize \n");
    scanf("%d",&factorial);

    if (factorial < 0)
    {
        printf("no");
    }
    else{

        for (size_t i = 1; i <= factorial; i++)
        {

            j=j*i;

        }
        printf("%d",j);
    }


    return 0;
}