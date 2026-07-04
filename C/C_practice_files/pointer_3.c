// 3. Swap Two Integers

// Write a function:

// void swap(int *a, int *b);

// In main():

// int x = 5;
// int y = 10;
// swap(&x, &y);

// After calling swap, x should be 10 and y should be 5.

#include <stdio.h>

void swap(int *a, int *b){
    int placeholder_for_a = *b;
    *b = *a;
    *a = placeholder_for_a;

}

int main(){

    int x = 5;
    int y = 10;

    swap(&x, &y);
    printf("value of x is %d,\n value of y is %d\n",x ,y);

}