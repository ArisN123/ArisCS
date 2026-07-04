// 6. Function That Modifies an Array

// Write:

// void double_array(int arr[], int len);

// It should multiply every element by 2.

// Example:

// int nums[] = {1, 2, 3};
// double_array(nums, 3);

// Expected array:

// 2 4 6

#include <stdio.h>


void double_array(int arr[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("value of %d element in array is %d - after transformation its ",i,arr[i]);
        arr[i] = arr[i] * 2;
        printf("%d\n",arr[i]);

    }
}


int main(){

    int nums[] = {1, 2, 3};
    double_array(nums, 3);




}