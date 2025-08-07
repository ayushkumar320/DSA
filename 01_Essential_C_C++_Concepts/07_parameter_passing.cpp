#include<iostream>
using namespace std;

// Call by value
void swapByCall(int, int);

// Call by address
void swapByAddress(int*, int*);

// Call by reference
void swapByReference(int&, int&);


int main(){
  int a = 10, b = 5;
  swapByCall(a, b);
  cout<<a<<" "<<b<<endl;
  
  swapByAddress(&a, &b);
  cout<<a<<" "<<b<<endl;  
  
  swapByReference(a, b);
  cout<<a<<" "<<b<<endl;
  
  return 0;
}

void swapByCall(int x, int y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}

void swapByAddress(int* x, int* y){
  int temp = *x;
  *x = *y;
  *y = temp;
}

void swapByReference(int &x, int &y){
  int temp;
  temp = x;
  x = y;
  y = temp;
}