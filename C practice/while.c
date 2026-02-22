#include <stdio.h>

int main(){


    int count =10;
// this shit lowkey a waste of my time get to the good stuff twin
    // while(count<5){
    //     count = ++count;
    //     printf("%i\n",count);
    //     printf("this not gonna go on forever eek\n");
    // }


    while (count>0)
    {
        int ans = 9*count;
        printf("9*%d = %d\n",count, ans);
        count = --count;
    }
    


    return 0;
}