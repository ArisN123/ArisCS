// 4. Array Length with sizeof

// Use this pattern:

// int len = sizeof nums / sizeof nums[0];

// Print the length of an array.

// Then try the same thing inside a function and notice what changes.


#include <stdio.h>
int main(){

     int nums[] = {11, 4, 99, 23, 7};

     int len = sizeof nums / sizeof nums[0];

     printf("size of nums is %d\n",len);

}


