#include <stdio.h>


int main(){


    double x = 6.7;
    int y = 7;
    
    double result = (int)x++ + y; 
    
    
    printf("%lf %lf", result,x);


    return 0;
}