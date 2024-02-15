//
// Created by nayem on 2/12/24.
//
#include "stdio.h"

int main(){
    int grades[10];
    int count = 10;
    long sum = 0L;
    float average = 0.0f;

    printf("Enter the 10 grades: \n");

    for(unsigned int i = 0; i < count; i++)
    {
        printf("%2u>", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;
    //list the grades
    for(unsigned int i = 0; i < count; i++)
        printf("\nGrade number %2u is %3d", i+1, grades[i]);
    return 0;
}