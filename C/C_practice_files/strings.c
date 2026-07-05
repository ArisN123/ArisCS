// Chapter 7 — Strings
// Exercise: String toolkit and cleaner

// Write a program that stores a sentence in a mutable array:

// char text[] = "Hello, C World 2026!";

// Create your own string functions:

// int my_strlen(char *s);
// void my_strcpy(char dest[], char src[]);
// void my_reverse(char s[]);
// int count_char(char s[], char target);
// void clean_string(char s[]);

// clean_string() should:

// Convert uppercase letters to lowercase.
// Replace spaces with underscores.
// Leave digits alone.
// Count digits.

// Your program should print:

// Original string.
// Copied string.
// Reversed string.
// Cleaned string.
// Character statistics.

// Main practice: string literals vs arrays, '\0', copying, mutation, and character-by-character processing.

#include <stdio.h>
int my_strlen(char *s);
void my_strcpy(char dest[], char src[]);
void my_reverse(char s[]);
int count_char(char s[], char target);
void clean_string(char s[]);

int main(){
    char *test_string = "Hello World!";
    char test_string_2[] = "Hello World!!123";
    // char test_string_3[] = "Hello World!!";
    // printf("there are %d chars in the string\n", my_strlen(test_string));
    // my_reverse(test_string_2);
    // printf("string is now %s\n",test_string_2);
    // printf("! appears in string %d times\n", count_char(test_string_2, '!') );
    clean_string(test_string_2);
}


int my_strlen(char *s){
    int len = 0;
    while(s[len]!='\0'){
        len++;
    }
    return len;
}

void my_strcpy(char dest[], char src[]){
    int str_len = my_strlen(src)+1;

    int i = 0;

    while(i < str_len){
        dest[i] = src[i];
        i++;
    }

}

void my_reverse(char s[]){
    int str_len;
    char placeholder;
    int i = 0;
    for(i = 0, str_len = my_strlen(s)-1; i < str_len; i++, str_len--){
        placeholder = s[i];
        s[i] = s[str_len];
        s[str_len] = placeholder;
    }
}

int count_char(char s[], char target){
    int i=0;
    int count = 0;
    while(s[i]!= '\0'){
        if(s[i] == target){
            count = count + 1;
        }
        i++;
    }
    return count;
}

void clean_string(char s[]){
    int i; 
    int len = my_strlen(s);
    int digits_count = 0;

    for(i=0;i<len;i++){

        //replace spaces with underscores
        if(s[i] == ' '){
            s[i] = '_';
        }
        //uppercase to lowercase
        if('Z' >= s[i] && s[i]>= 'A'){
            s[i] = s[i] + 32;
        }

        if(57 >= s[i] && s[i]>= 48){
            digits_count = digits_count + 1;
        }
    }
    printf("cleaned string is %s\n it contained %d digits\n",s, digits_count);
}
