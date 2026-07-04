// 2. Change Through Pointer

// Create:

// int x = 10;
// int *p = &x;

// Use *p = 99;

// Print x.

// Expected result:

// 99
#include <stdio.h>

int main(){

    int x = 10;
    int *p = &x;

    *p = 99;
    printf("x is %d\n",x);
}