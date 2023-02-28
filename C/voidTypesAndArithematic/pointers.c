#include <stdio.h>

int main(){

   int a = 1025;

   // Try with 1234, overflow will occur

    int *p;

    p = &a;

    printf("Lets store the address of 'a' in the pointer 'p' by saying 'int *p = &a'\n");
    printf("Value = %d, Address = %d\n", *p, p);
    printf("Value = %d, Address = %d\n\n", *(p+1), (p+1));


    char *pc;
    pc = (char*)p;

    printf("Value = %d, Address = %d\n", *pc, pc);
    printf("Value = %d, Address = %d\n", *(pc+1), (pc+1));
    printf("Value = %d, Address = %d\n", *(pc+2), (pc+2));
    printf("Value = %d, Address = %d\n\n", *(pc+4), (pc+3));

    void* pv = p;
    printf("Address = %d\n", pv);

    // Try doing differnt stuff
    p[0] = 9232;
    p[1] = 891;
    // You can also represent consecutive addresses like this
    printf("\n\n\nWriting p[0] = 9232, p[1]=891.\n", a, p[0], p[1]);
    printf("Value of a = %d, Value of p[0] = %d, Value of p[1] = %d\n", a, p[0], p[1]);

}

