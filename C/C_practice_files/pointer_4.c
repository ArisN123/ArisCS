// 4. Double a Number by Pointer


#include <stdio.h>

void double_int(int *a){
    *a = 2 * *a;
}

int main(){

    int x = 5;

    printf("the value of x is %d\n",x);

    double_int(&x);

    printf("the value of x is %d\n",x);



}