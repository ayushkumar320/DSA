#include<iostream>
using namespace std;

int main() {
  int a = 10;
  int &r = a;  // This is a reference, we must initialize it same time only
  r++;       // It also changes the a value as r is just another name to variable a

  // We can not assign different value to r, like r = b is not possible
  cout<<a<<endl<<r<<endl;  
}