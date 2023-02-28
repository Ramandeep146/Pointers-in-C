#include <stdio.h>
#include <string.h>

void print(char* C){

    while(*C != '\0'){
        printf("%c", *(C));
        C++;
    }
    printf("\n");

}

int main(){

    char C[20] = "Hello"; // the string gets in the space for array
    //char *C = "Hello"; // the string gets stored as compile time constant, cannot modigy
    // something like: const char *C : in this case, we cannot modify the content
    print(C);

}
