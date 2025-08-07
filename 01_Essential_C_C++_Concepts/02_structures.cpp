#include<iostream>
using namespace std;

// Defination of a structure it should be outside the main function
struct Rectangle {
  int length;
  int breadth;
} r4, r5;  // Can be declared here also

struct Rectangle r3;  // It can be declared here also

int main() {
  struct Rectangle r1 = {10, 5};  // Declaration + Initialization
  struct Rectangle r2; // Declaration
  r2.length = 20;
  r2.breadth = 10;

  cout<<"Area of r2 is: "<<r2.length*r2.breadth<<endl;
  cout<<sizeof(r2);
  return 0;
}