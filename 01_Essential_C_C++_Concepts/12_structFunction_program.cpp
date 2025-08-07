#include<iostream>
using namespace std;

struct Rectangle {
  int length;
  int breadth;
};

int area(Rectangle r){
  return r.length * r.breadth;
}

int perimeter(Rectangle r){
  return 2*(r.length+r.breadth);
}

int main(){
  Rectangle r;
  cout<<"Enter leangth and breadth\n";
  cin>>r.length>>r.breadth;
  cout<<"Area: "<<area(r)<<" Perimeter: "<<perimeter(r)<<endl;
  return 0;
}