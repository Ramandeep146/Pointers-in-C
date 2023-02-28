#include <stdio.h>
#include <stdlib.h>

int main(){

    /**
    To use heap memory in C use the following functions:
    1. malloc
    2. calloc
    3. realloc
    4. free

    To use heap memory in C++ use the following operators:
    1. new
    2. delete
    **/

    int a; // goes on stack

    int *p;
    p = (int*)malloc(sizeof(int)); /// malloc returns a void pointer to heap address so we convert it to (int*)
    *p = 10;

    free(p); /// to clear the particular memory in the heap, must be removed if not using (Otherwise unwanted use of memory)

    p = (int*)malloc(sizeof(int));
    *p = 20;
    free(p);

    // In calloc, it also initializes all the values as 0 as compared to malloc which has garbage value before manual initialization
    p = (int *)calloc(3, sizeof(int)); // number of elements, size of one element
    free(p);

    ///For C++
    //int b;
    //int *po;

    //po = new int;
    //*po = 10;
    //delete p;

    //po = new int[20];
    //delete[] po;
}
