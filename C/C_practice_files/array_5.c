// 5. Function That Prints an Array

// Write:

// void print_array(int arr[], int len);

// Call it from main().

// Important: pass the length separately.

#include <stdio.h>


void print_array(int arr[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("array element at index %d is %d\n",i,arr[i]);
    }
}


int main(){

    
int nums[] = {11, 4, 99, 23, 7};

print_array(nums,5);


}