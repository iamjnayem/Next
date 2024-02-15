//
// Created by nayem on 2/12/24.
//
#include "stdio.h"

int main(){
    int lamsam[10];
    for(int i = 10; i < 1000; i++) {
        lamsam[i] = lamsam[i-1] * lamsam[i+1];
    }
    return 0;

}