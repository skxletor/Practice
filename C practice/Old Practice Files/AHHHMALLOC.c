#include <stdio.h>
#include <stdlib.h>

int main(){

    // int n=5;
    // int* pn;
    // pn =malloc(n * sizeof(int));

    // if (pn == NULL)
    // {
    //     printf("fuh you");
    //     return 0;
    // }


    // for (size_t i = 0; i < n; i++)
    // {
    //     scanf("%d",pn+i);
    // }

    // for (size_t i = 0; i < n; i++)
    // {
    //     printf("\n%d",*(pn+i));
    // }

    // free(pn);
    
    //programming "tacks"


    int ages=5;

    int* pAges = malloc(ages * sizeof(int));


    for (size_t i = 0; i < ages; i++)
    {
        scanf("%d",pAges+i);
    }
    

    for (size_t i = 0; i < ages; i++)
    {
        printf("\n%d",*(pAges+i));
    }

    ages=7;

    pAges = realloc(pAges,ages*sizeof(int));
    
    pAges[5]=32;

    pAges[6]=59;

    printf("\n");
    for (size_t i = 0; i < ages; i++)
    {
        printf("\n%d",*(pAges+i));
    }


    return 0;
}