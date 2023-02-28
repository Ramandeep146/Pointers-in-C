#include <stdio.h>

int main(){

   int a = 1234;

    int *p;

    p = &a;

    printf("Lets store the address of 'a' in the pointer 'p' by saying 'int *p = &a'\n");
    printf("The value of 'a' is %d at address %d\n\n", *p, p);

    //p+1 will exceed by 4 because size of int is 4 bytes (32bits) and will garbag value because (p+1) memory address does not have any assigned value
    printf("Lets increment the value of 'p' by doing p++\n");
    p++;
    printf("The garbage value is %d at address %d\n", *(p), (p));
    p--;
    printf("As you can see, the address will increase by 4 because the size of int is 4.\n");
    printf("It will contain garbage value because no value is assigned in this memory address.\n\n");

}
