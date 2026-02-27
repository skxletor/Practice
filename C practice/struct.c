#include <stdio.h>

struct person
{
    double gpa;
    int age;
};


int main(){

    struct person person1;
    struct person person2;
    person1.gpa = 1;
    person1.age=4;

    person2.gpa = 4;
    person2.age=400;

    
    printf("dumb %.1lf and unc %d\n", person1.gpa,person1.age);
    printf("genius %.1lf and wow %d", person2.gpa,person2.age);


    return 0;
}