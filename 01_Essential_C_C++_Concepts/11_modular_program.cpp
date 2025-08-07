#include<iostream>
using namespace std;

int area(int l, int b){
  return l*b;
}
int perimeter(int l, int b){
  return 2*(l+b);
}
int main(){
  int len = 0, bre = 0;
  cout<<"Enter length and breadth\n";
  cin>>len>>bre;
  cout<<"Area: "<<area(len, bre)<<" Perimeter: "<<perimeter(len, bre)<<endl;
  return 0;
}