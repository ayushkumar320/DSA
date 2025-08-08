#include<bits/stdc++.h>
using namespace std;

void explainVector();

int main(){
  explainVector();
  return 0;
}

// Vectors can be used in place of an array, the only good thing is vectors is dynamic in size, we can modify the size of a vector!

void explainVector(){

  vector<int> v;  // Declaring a vector or Creates an empty container

  v.push_back(1);   // add 1 to the empty vector
  v.emplace_back(2);   // dynamically increases its size and pushes 2 in back, generally emplace_back is faster than push_back
  
  vector<pair<int, int>> vec;    // vector of a pair data type
  
  vec.push_back({1, 2});    // Here we need to insert in {}
  vec.emplace_back(1, 2);   // We dont need to use {} it automatically assumes it as a pair

  vector<int> v3(5, 100);    // A container of size 5 and all 5 values being 100

  vector<int> v4(5);  // A container of size 5 with any garbage value in it

  vector<int> v1(5, 20);
  vector<int> v2(v1);     // Copying v1 in v2 or copy of v1


  // Creating a vector with elements 1 to 10

  vector<int> v5;
  for(int i = 1; i <= 10; i++){
    v5.emplace_back(i);
  }
  // cout<<v5[1];

  // Accessing elements in vector

  vector<int>::iterator it = v5.begin();   // Iterator points to the memory address
  
  it++;   // Shifting the the 2nd place
  cout<<*(it)<<" ";

  it = it+2;  // Shifting to the fourth place
  cout<<*(it)<<" ";

  // Different iterator positions

  // End will point to the next position after the last element, so it will not point to any element to point to an element we need to use it1--;
  vector<int>::iterator it1 = v5.end();
  it1--;  // Now it1 points to the last element of the vector

  // Reverse iterators - Very less used!

  // rbegin points to the last element and rend points to the position before the first element
  vector<int>::reverse_iterator it2 = v5.rbegin();
  it2++;  // Now it2 points to the second last element of the vector
  
  vector<int>::reverse_iterator it3 = v5.rend(); 


  cout<<v5[0]<<" "<<v5.at(0)<<endl;
  // at() is used to access elements in vector, it is safer than using [] as it checks for out of bounds error

  cout<<v5.back()<<" " ;
  // back() returns the last element of the vector
  cout<<v5.front()<<" "<<endl;
  // front() returns the first element of the vector


  // Using loops to print the vector elements

  for(vector<int>::iterator it = v5.begin(); it != v5.end(); it++){
    cout << *(it) <<" ";
  }
  cout<<endl;

  // We can use auto - it automatically assigns it to vector datatype
  // v5.begin() - address of first element
  // v5.end() - address of one past the last element
  for(auto it = v5.begin(); it != v5.end(); it++){
    cout<<*(it)<<" ";
  }
  cout<<endl;

  for(auto it:v5){
    cout<<it<<" ";
  }
  cout<<endl;


  // Erasing a vector
  
}