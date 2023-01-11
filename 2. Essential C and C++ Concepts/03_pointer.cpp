// Normal variables are Data variables
// Pointers are Address variable, as they store address of another variable
// Why use Pointers?
// To access the Heap memory
// To access resources which are outside the program
// Also for Parameter Passing

#include <iostream>
using namespace std;

int main () {

    int a = 10; // Data variable

    int *p; // Address variable

    p = &a; // Initiialization of a pointer variable

    printf("%d\n", a);

    printf("%d", *p);   // Deference (*) to print the value of a

    return 0;
}