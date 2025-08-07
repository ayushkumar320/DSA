#include<iostream>
using namespace std;

int main() {
  
  int a = 10;

  // Declaration of pointer
  int* p;
  
  // Assigning the address
  p = &a;    // & --> address of operator
  cout<<(int)p<<endl;   // By default p stores hexadecimal address, so typecasted it to integer
  
  cout<<*p<<endl;  // *p --> here it is dereferencing the address and will give the value
  
  return 0;
}