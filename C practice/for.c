#include <stdio.h>

int main(){

    double factorial;
    double j=1;
    printf("what num do u wanna factorialize \n");
    scanf("%lf",&factorial);

    if (factorial < 0)
    {
        printf("no");
    }
    else{

        for (size_t i = 1; i <= factorial; i++)
        {

            j=j*i;

        }
        printf("%.0lf!=%.0lf",factorial,j);
    }


    return 0;
}