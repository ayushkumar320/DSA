#include<iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

// Call by value
// void fun(Rectangle r){
//   r.length = 20;     // As this is call by value it will not change the actual parameter
//   cout<<"Length: "<<r.length<<endl<<"Breadth: "<<r.breadth<<endl;
// }

// Call by address
void fun (Rectangle * r){
  r -> length = 20;
  cout<<"Length: "<<r->length<<endl<<"Breadth: "<<r->breadth<<endl;
}

int main(){
  Rectangle r = {10, 5};   // In C++ we dont need to write keyword struct
  // fun(r);  // we will get 20 as length here as it it printing local copy 
  
  fun(&r);
  cout<<r.length<<" "<<r.breadth<<endl;  // Here it will remain unchanged in call by value but gets changed in call bye address
  return 0;
}