//
// Created by nayem on 2/15/24.
//

#include "stdio.h"

int main(){
    int a[40];
    printf("Address of a: %d\n", a);
    printf("Address of 2nd element of a: %d\n", &a[1]);
    printf("Address of 3rd element of a: %d\n", &a[2]);
    printf("Address of 4th element of a: %d\n", &a[3]);

    //print value & address of an array
    int data[5];
    for(unsigned int i = 0; i < 5; i++)
    {
        data[i] = 12 * (i + 1);

        if(i == 0)
        {
            printf("Value of 1st element: %d & address of 1st element: %p\n", data[0], &data[0]);
        }
        else if(i == 1)
        {
            printf("Value of 2nd element: %d & address of 2nd element: %p\n", data[1], &data[1]);
        }
        else if(i == 2)
        {
            printf("Value of 3rd element: %d & address of 3rd element: %p\n", data[2], &data[2]);
        }
        else
        {
            printf("Value of %dth element: %d & address of 3rd element: %p\n", (i+1), data[i], &data[i]);
        }
    }
    return 0;
}
