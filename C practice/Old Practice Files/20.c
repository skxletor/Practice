#include <stdio.h>

int main(){

    int arr[2][3] = {{1, 3, 5},{2, 4, 6}};

    
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            printf("%d ",arr[i][j]);
        }
        
    }
    
    return 0;
}