#include <stdio.h>

void Print(){
    printf("Hello");
}

int *Add(int *a, int *b){

    int c = (*a) + (*b);
    return &c;

}

int *ActualAdd(int *a, int *b){

    int *c = (int*)malloc(sizeof(int));
    *c = (*a) + (*b);
    return c;

}

int main(){
    int a = 2, b = 4;
    ///int *ptr = Add(&a, &b);
    ///Print();
    ///printf("Sum = %d", *ptr);
    // Data will get overridden because print() will be called which will override the address of 'c' in the stack

    // Use it only when the data is stored in the Heap or Global area
    int *pt = ActualAdd(&a, &b);
    printf("Sum = %d", *pt);
}
