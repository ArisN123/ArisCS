// 3. Find the Largest Number

// Given:

// int nums[] = {11, 4, 99, 23, 7};

// Find and print the largest value.



#include <stdio.h>

int main(){

     int nums[] = {11, 4, 99, 23, 7};

     int largest_num = nums[0];

    int i;
     for(i=0;i<5;i++){
        if(nums[i]>largest_num){
            largest_num = nums[i];
        }
     }

     printf("largest num in index is %d\n",largest_num);
}