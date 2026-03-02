#include <stdio.h>

typedef struct asdfasdf
{
    int real;
    int imag;
}comp;


int main(){


    int real1v;
    int imag1v;
    int real2v;
    int imag2v;

    scanf("%d",&real1v);
    scanf("%d",&imag1v);
    struct asdfasdf num1={real1v,imag1v};

    printf("%d + %di",num1.real,num1.imag);
    //look in video to figure out why i cant add it


    

    return 0;
}