#include <stdio.h>

int main(){

    int a = 1234;

    int* p = &a; // only &a is valid

    int** q = &p; // only &p is valid, no &a

    int*** r = &q; // only &q is valid, no &a or &p

    printf("Address 'p' = %d, Value of '*p' = %d\n\n", p, *p);
    printf("Address 'q' = %d, Value of '*q' = %d\n", q, *q);
    printf("Address (*q) = %d, Value of '*(*q)' = %d\n\n", *q, *(*q));
    printf("Address 'r' = %d, Value of '*r' = %d\n", r, *r);
    printf("Address '(*r)' = %d, Value of '*(*r)' = %d\n", *r, *(*r));
    printf("Address '(*(*r))' = %d, Value of '*(*(*r))' = %d\n\n", *(*r), *(*(*r)));
    // You can also write **q or ***r but its a good practice to use brackets

    ***r = 10;
    printf("'***r = 10', a is now %d\n", a);
    **q = *p + 2;
    printf("'**q = *p + 2', a is now %d\n", a);

}
