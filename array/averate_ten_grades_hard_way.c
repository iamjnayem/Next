//
// Created by nayem on 2/12/24.
//

#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"

int main(void)
{
    int grade0 = 0;
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;
    int grade4 = 0;
    int grade5 = 0;
    int grade6 = 0;
    int grade7 = 0;
    int grade8 = 0;
    int grade9 = 0;

    long sum = 0L;
    float average = 0.0f;

    printf("enter the first five grades: \n");
    printf("use a space or press enter between each number.\n");
    scanf("%d%d%d%d%d", &grade0, &grade1, &grade2, &grade3, &grade4);
    printf("enter the last five numbers in the same manner.\n");
    scanf("%d%d%d%d%d", &grade5, &grade6, &grade7, &grade8, &grade9);

    sum = grade0 + grade1 + grade2 + grade3 + grade4 + grade5 + grade6 + grade7 + grade8 + grade9;
    average = (float) sum/10.0f;
    printf("Average of the ten grades entered is: %f\n", average);
    return  0;

    // Note: Two arrays are same when they have same number of elements & same type


}