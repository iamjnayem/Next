//
// Created by nayem on 2/12/24.
//
#include "stdio.h"

int main(){
    int grades[10];
    int count = 10;
    long sum = 0L;
    float average = 0.0f;

    printf("Enter the 10 grades: ");

    for(int i = 0; i < 10; i++)
    {
        printf("%2d> ", i+1);
        scanf("%d", &grades[i]);
        sum += grades[i];
    }

    average = (float)sum / count;
    printf("Average of the ten grades entered is: %.2f\n", average);


}