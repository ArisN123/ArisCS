// 8. 2D Array Grid

// Create a 3x3 array:

// int grid[3][3] = {
//     {1, 2, 3},
//     {4, 5, 6},
//     {7, 8, 9}
// };

// Print it like:

// 1 2 3
// 4 5 6
// 7 8 9

// Extra: calculate the sum of all numbers.
#include <stdio.h>

int main(){
int grid[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};


int r;
int c;
int sum =0;

for(r=0;r<3;r++){
    for(c=0;c<3;c++){
        printf("%d ",grid[r][c]);
        sum= sum + grid[r][c];
    }
     printf("\n");
}

printf("sum of all grids is %d\n",sum);
}