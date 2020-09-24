// QUESTION #2

#include <cstdlib>
#include <iostream>
#include <cstdio>
#include "_pause.h"

using namespace std;

int main() {

    char x[10];
    char *pointer = &x[0];

    cout << "The value of x is " << x[0] << "." << endl;
    cout << "The address of x is " << (void*)&x[0] << "." << endl;
    cout << "The pointer is " << *pointer << "." << endl;

    system ("pause");
    return EXIT_SUCCESS;

}