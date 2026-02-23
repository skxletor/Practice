#include <stdio.h>

int main(){

    int factorial;

    printf("what num do u wanna factorialize \n");
    scanf("%d",&factorial);

    if (factorial == 0)
    {
        printf("1");
    }
    else{

        for (size_t i = (factorial-1); i > 0; i--)
        {
            factorial=factorial*i;

            printf("%d ",i);
            if (i=1)
            {
              printf("%d",factorial);
            }
            else
            continue;
            
        }
    }


    return 0;
}