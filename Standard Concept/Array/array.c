#include<stdio.h>

int main()
{
    //creating array
    int tstarray[5];
    int i,j;

    // Value assigning
    for(int i=0;i<=5;i++) {
        tstarray[i]=i+15;
    }

    //Calculating length of array
    int sizeOfarray = sizeof(tstarray);
    int lenOfDatatype = sizeof(int);
    int lengthOfArray = sizeOfarray/lenOfDatatype;

    //Accesing the value
    for(int j=0;j<=lengthOfArray;j++) {
        printf("tstarray[%d] = %d\n",j,tstarray[j]);
    }
}