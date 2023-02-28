#include <stdio.h>

int main(){

    int A[] = {2, 5, 6, 9, 12};

    int* p = &A; // it can be 'A' or '&A', both have same meaning for first element address in an array
    // p++ is valid but not A++

    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
    printf("First element address using 'A+i' = %d\n", (A+i));
    printf("First element address using '&A[i]' = %d\n", &A[i]);

    printf("First element element using 'A[i]' = %d\n", A[i]);
    printf("First element element using '*A' = %d \n \n", *(A+i));
    }


}
