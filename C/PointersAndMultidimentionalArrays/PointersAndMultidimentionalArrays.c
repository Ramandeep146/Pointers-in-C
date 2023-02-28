#include <stdio.h>

int main(){

    int B[2][3];
    B[0][0]=2;
    B[0][1]=3;
    B[0][2]=5;
    B[1][0]=6;
    B[1][1]=8;
    B[1][2]=9;

    // this will give us compilation error (in visual code)
    // int *p = B; B will return pointer to 1D array of 3 integers

    int (*p)[3] = B; // This is correct

    printf("B or &B[0] > %d                 //Returns pointer to 1D array of 3 integers\n", B);
    printf("*B or B[0] or &B[0][0] > %d     //Returns pointer to first integer\n", *B);
    printf("B+1 or &B[1] > %d               //Returns pointer to 1D array of 3 integers (skipping first 12 bytes)\n", B+1);
    printf("*(B+1) or B[1] or &B[1][0] > %d //Returns pointer to first integer (skipping first 12 bytes)\n", *(B+1));
    printf("*(B+1)+2 or B[1]+2 or &B[1][2] > %d\n", *(B+1)+2);
    printf("*(*B + 1) or B[0][1] > %d\n", *(*B + 1));

    // B[i][j] = *(B[i] + j)
    //         = *(*(B + i) + j)


}
