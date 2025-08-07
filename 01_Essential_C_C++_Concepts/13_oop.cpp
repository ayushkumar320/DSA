#include<iostream>
using namespace std;

class Rectangle {
  private:
    int length;
    int breadth;
  public: 
    Rectangle(int l, int b){     // This is a constructor
      length = l;
      breadth = b;
    }
    int area(){
      return length*breadth;
    }
    int perimeter(){
      return 2*(length+breadth);
    }
};

int main(){
  Rectangle r(20, 5);
  cout<<r.area()<<" "<<r.perimeter();
}