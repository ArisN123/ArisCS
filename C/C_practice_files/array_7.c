// 7. Reverse an Array

// Write a function:

// void reverse_array(int arr[], int len);

// Use two indexes: one from the start, one from the end.
#include <stdio.h>

void reverse_array(int arr[], int len){
    int i;
    int j;
    for(i=0, j=len-1; i<j;i++,j--){
        int placeholder_for_i = arr[i];
        arr[i] = arr[j];
        arr[j] = placeholder_for_i;
    }
    for(i=0;i<len;i++){
        printf("the %d element of the array is %d\n", i, arr[i]);
    }
}

int main(){

int nums[] = {11, 4, 23, 7};

reverse_array(nums, sizeof nums / sizeof nums[0]);


}