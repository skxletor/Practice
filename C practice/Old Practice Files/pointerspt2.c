#include <stdio.h>

int main(){


    // programming tacks time!!!



    int arr[]= {34,12,21,54,48};

    int largest = *arr;

    for (size_t i = 0; i < 5; i++)
    {
        if (largest<*(arr+i))
        {
            largest = *(arr+i);
            *arr = *(arr+i);
        }
        
    }

    for (size_t i = 0; i < 5; i++)
    {
        printf("%d\n",*(arr+i));
    }
    
    printf("!!!!!%d",largest);
    


    










    // int nums[5] = {1,3,5,7,9};

    // // printf("array addy twin %d",*nums+1);

    // *(nums +3)=111;

    // // printf("%d %d",*(nums+3),nums[3]);

    // for (size_t i = 0; i < 5; i++)
    // {
    //     printf("%d and %d\n", *(nums+i),nums[i]);
    // }



    

    return 0;
}