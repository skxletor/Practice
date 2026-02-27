#include <stdio.h>

struct person
{
    double gpa;
    int age;
};


int main(){

    struct person person1;

    person1.gpa = 1;
    person1.age=4;

    
    printf("dumb %.1lf and unc %d", person1.gpa,person1.age);


    return 0;
}