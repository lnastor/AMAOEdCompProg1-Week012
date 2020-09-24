// QUESTION #3

#include <cstdlib>
#include <cstdio>
#include <iostream>
#include "_pause.h"

using namespace std;

int main() {

  float x[20];
  float &refx = x[0];

  cout << "The value of x is " << x[0] << "." << endl;
  cout << "The address of x is " << (void*)&x[0] << "." << endl;
  cout << "The reference is " << refx << "." << endl;

system ("pause");
return EXIT_SUCCESS;

}