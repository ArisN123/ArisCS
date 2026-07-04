// 1. Print an Array

// Create:

// int nums[] = {3, 6, 9, 12, 15};

// Use a for loop to print every element.

#include <stdio.h>

int main(){

int nums[] = {3, 6, 9, 12, 15};
int i = 0;

    for(i=0; i<5; i++){
        printf("the value at array index %d is %d\n", i, nums[i]);
    }


}