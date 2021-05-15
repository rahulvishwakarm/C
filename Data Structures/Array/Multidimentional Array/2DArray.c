#include<stdio.h>

int main()
{
    int arr[2][3] = {{3,4,6},{7,5,3}};
    
    printf("Accessing all element: ");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d",arr[i][j]);
        }
    }

}