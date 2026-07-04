// Chapter 4 — Functions
// 1. Square Function

// Write a function:

// int square(int x);

// It should return x * x.

// Call it from main() with several values.

#include <stdio.h>


int square(int x){
       int  placeholder = x * x;
       printf("the square of %d is %d\n",x,placeholder);
       return placeholder;
    }

int main(){



    int y = 0;
    int z  = -5;

    y = square(y);
    z = square(z);
    printf("y is %d, z is %d", y,z);

}