#include <stdio.h>

int sumOfElements(int A[]){

    // Compiler implicitly converts int A[] to int* A;
    // In x64 architectures pointers are assigned 8 bytes. Since A is technically a pointer in that context and that's why you'll get 8 bytes of size

    // Instead of copying the values for array in this function, we are just copying and storing the address of the variable
    // Arrays are always passed as reference parameters (not call by value)
    printf("sumOfElements: Size of array = %d, Size of first element = %d\n", sizeof(A), sizeof(A[0]));
    int sum = 0;
    for(int i=0; i<sizeof(A)/sizeof(A[0]); i++){
        sum+=A[i]; // A[i] is same as *(A+i)
    }
    return sum;
}

int sum(int* A, int size){
    // int* A or int A[] is the same thing
    int sum = 0;
    for(int i=0; i<size; i++){
        sum+=A[i];
    }
    return sum;
}

int main(){

    int A[] = {2, 4, 5, 7, 8};

    int total = sumOfElements(A);

    printf("main: Size of array = %d, Size of first element = %d\n\n", sizeof(A), sizeof(A[0]));

    printf("sumOfElements = %d\n\n", total);

    total = sum(A, sizeof(A)/sizeof(A[0]));
    printf("sum = %d\n", total);

    // Extra
    int *p;
    p = A;
    // but we cannot do A = p;
}

