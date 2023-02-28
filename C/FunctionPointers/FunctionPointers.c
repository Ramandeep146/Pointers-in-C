#include <stdio.h>

int Add(int a, int b){
    return a+b;
}

int* Funs(int a, int b){ // Declaring a function that would return int*
    a = 10;
    int *p = &a;
    return *p;
}

int (*Func)(int a, int b); // Declaring a function pointer


void print(char *name){
    printf("Hello, %s\n", *name);
}

int main(){

    int c;
    /// int *p(int,int) has a different meaning
    int (*p)(int, int);

    /// using just Add will also return the address of the function
    p = &Add;

    /// we can also use c = p(2,3)
    c = (*p)(2, 3); // de-referencing and executing the function
    printf("%d", c);

    // Another example
    void (*ptr)(char*);
    ptr = print;
    (*ptr)("abc");

}
