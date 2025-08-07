#include<iostream>
using namespace std;

int add (int, int);     // Prototype of add function

int main() {
  int x = 10, y = 5;
  int z = add(x, y);  // Calling the function
  cout<<z<<endl;
  return 0;
}


// Function declaration is generally done below main function
int add (int a, int b) {
  int c = a+b;
  return c;
}