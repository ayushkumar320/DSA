#include <iostream>
using namespace std;

struct Rectangle
{
  int length;
  int breadth;
};
 
int main()
{

  struct Rectangle *p;
  p = new Rectangle; // Dynamically allocate memory for Rectangle
  p->length = 10;    // Accessing members using pointer
  p->breadth = 5;    // Accessing members using pointer

  cout << "Length: " << p->length << endl;
  cout << "Breadth: " << p->breadth << endl;

  delete p; // Free the dynamically allocated memory
  return 0;
}