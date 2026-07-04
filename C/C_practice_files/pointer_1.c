// Chapter 5 — Pointers
// 1. Address Printer

// Create an int x = 42.

// Print:

// x
// &x

// Then create:

// int *p = &x;

// Print:

// p
// *p

// // Goal: understand address vs value.

#include <stdio.h>


int main(){



    int x = 42;
    int *p = &x;
    printf("value of x is %d\n",x);
    printf("location of x is %p\n", (void *)p);




}