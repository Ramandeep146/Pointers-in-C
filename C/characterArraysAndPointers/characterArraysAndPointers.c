#include <stdio.h>
#include <string.h>

int main(){

    // Important: Pointers and Arrays are different types which are used in a similar manner
    // Arrays are alwas passed to a function by reference

    char C[10];

    C[0] = 'R';
    C[1] = 'A';
    C[2] = 'M';
    C[3] = 'A';
    C[4] = 'N';

    printf("%s\n", C);

    C[5] = '\0'; // null value which will tell to stop the string

    printf("%s\n\n", C);

    char C1[] = "JOHN"; // The size of the array will be 5, one extra to store null value in the end to signify the end of the string
    // if manually setting up the string length/ character array length, make sure the size of array should be (string length + 1)
    int size = sizeof(C1);
    int len = strlen(C1);
    printf("Array Size = %d, String length = %d\n", size, len);

}
