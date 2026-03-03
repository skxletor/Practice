#include<stdio.h>

enum Funny{
    six=67,
    seven=76,
    noWay=666,
    nine=69 

};

int main(){
    enum Funny WOWWW=six;
    printf("%d",WOWWW);


    return 0;
}