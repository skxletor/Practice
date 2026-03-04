#include <stdio.h>

int main(){

    int n=5;
    int* pn;
    pn =(int*)malloc(n * sizeof(int));

    if (pn == NULL)
    {
        printf("fuh you");
        return 0;
    }


    for (size_t i = 0; i < n; i++)
    {
        scanf("%d",pn+i);
    }

    for (size_t i = 0; i < n; i++)
    {
        printf("\n%d",*(pn+i));
    }

    free(pn);
    

    return 0;
}