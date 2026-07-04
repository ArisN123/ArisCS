// 2. Sum an Array

// Write a program that calculates the sum of:

// int nums[] = {2, 4, 6, 8, 10};

// Expected:

// Sum: 30


#include <stdio.h>

int main(){
    int sum = 0;
    int nums[] = {2, 4, 6, 8, 10};
    int i = 0;
    for(i=0;i<5;i++){
        printf("added %d to %d, ",nums[i],sum);
        sum = sum + nums[i];
        printf("new sum is %d\n",sum);
    }



}