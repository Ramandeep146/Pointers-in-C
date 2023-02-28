#include <stdio.h>
#include <stdlib.h>

int main(){

    int *p;

    /// malloc - void* malloc(size_t size)  -- unsigned int
    /// calloc - void* calloc(size_t num, size_t size)
    /// realloc - void* realloc(void *ptr, size_t newSize)

    int n;

    printf("Enter size of the array: ");
    scanf("%d", &n);

    // int A[n]; will give error

    int *A = (int *)malloc(n*sizeof(int));

    for (int i = 0; i < n; i++) {
        A[i] = i + 1;
    }

    int *B = (int *)realloc(A, n/2); // if put 0 instead of n/2, its like free(A)
                                     // if NULL instead of A, then its equivalent to malloc
    for (int i = 0; i < n; i++) {
        printf("%d ", B[i]);
    }


}
