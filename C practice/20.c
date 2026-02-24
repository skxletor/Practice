#include <stdio.h>

int main(){

    int arr[2][3] = {{1, 3, 5},{2, 4, 6}};

    arr[0][0]=2;
    printf("%d",arr[0][0]);

    return 0;
}