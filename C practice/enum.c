#include<stdio.h>

enum Days{
    Sunday,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}weekend1,weekend2;

int main(){

    weekend1 = Saturday;
    weekend2 = Sunday;

    printf("%d %d booo",weekend1, weekend2);
    return 0;
}