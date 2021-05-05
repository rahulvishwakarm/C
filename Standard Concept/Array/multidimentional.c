#include<stdio.h>

int main()
{
    //initializing the multidimentional array
    double mul_arr[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
    int i,j;
    
    //traversing the mutlidimentional array
    for(int i=0;i<5;i++) {
        for(int j=0;j<2;j++) {
            printf("mul_array[%d][%d] = %d\n",i,j,mul_arr[i][j]);
        }
    }
    return 0;
}