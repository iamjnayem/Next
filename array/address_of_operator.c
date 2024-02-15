//
// Created by nayem on 2/15/24.
//
#include "stdio.h"

int main(){
    long a = 1L;
    long b = 2L;
    long c = 3L;

    double d = 4.0;
    double e = 4.0;
    double f = 4.0;


    printf("A variable of type long occupies %u bytes", sizeof(long));
    printf("\nHere are the address of some variable of type long: ");
    printf("\nThe address of a is : %p", &a);
    printf("\nThe address of b is : %p", &b);
    printf("\nThe address of c is : %p", &c);
    printf("\nA variable of type double occupies %u bytes", sizeof(double));
    printf("\nHere are the address of some variable of type double: ");
    printf("\nThe address of of d is: %p", &d);
    printf("\nThe address of of e is: %p", &e);
    printf("\nThe address of of f is: %p", &f);
    return 0;
}