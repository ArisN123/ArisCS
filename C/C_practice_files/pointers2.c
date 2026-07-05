// Chapter 11 — Pointer Arithmetic
// Exercise: Secret message decoder

// Store an encoded message:

// char msg[] = "uif tfdsfu dpef jt qpjoufst";

// Each letter has been shifted forward by 1. So u should become t, i should become h, and so on.

// Write a decoder that:

// Walks through the string using a pointer, not array indexing.
// Changes each letter by moving it back one character.
// Leaves spaces unchanged.
// Prints the decoded message.
// Counts the decoded message length using pointer subtraction.

// Expected output:

// the secret code is pointers
// Length: 27

// This is one task: decode a message using pointer movement.
#include <stdio.h>


// int main(){


//     char msg[] = "uif tfdsfu dpef jt qpjoufst";
//     char *pointer = msg;
//     int i = 0;
//     char new[0];

//     while(pointer[i]!='\0'){
//         if(pointer[i] != 32){
//       new[i] = pointer[i] - 1;}
//       else
//       {new[i] = pointer[i];}
//       i++;
//     }
//     printf("%s\nLength:%d",new,i);
// }

int main(){
    char msg[] = "uif tfdsfu dpef jt qpjoufst";
    char *p = msg;
    while(*p !='\0'){
        if(*p != 32){
            *p = *p - 1;
           
        } 
        printf("%c",*p);
        p++;
    }
    printf("\n");
    int length = p - msg;
    printf("Length: %d",length);



}