#include <stdio.h>

// Except first array, all other arrays must be specified
void func(int A[][2][2]){ // or (*A)[][][]


}

int main(){

    int C[3][2][2];

    C[0][0][0] = 1;
    C[0][0][1] = 2;
    C[0][1][0] = 4;
    C[0][1][1] = 5;
    C[1][0][0] = 7;
    C[1][0][1] = 8;
    C[1][1][0] = 9;
    C[1][1][1] = 12;
    C[2][0][0] = 14;
    C[2][0][1] = 15;
    C[2][1][0] = 17;
    C[2][1][1] = 18;

    int (*p)[2][2] = C; // This statement is correct

    // C[i][j][k] = *(C[i][j] + k)
    //            = *(*(C[i] + j) + k)
    //            = *(*(*(C+i) + j) + k)


    int X[10][2][2];
    func(X);

}
