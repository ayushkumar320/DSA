#include<bits/stdc++.h>
using namespace std;

void explainSet();

int main(){
  explainSet();
  return 0;
}

// Set works on the principle of unique elements where each element can only appear once
void explainSet(){
  set<int> s;
  s.insert(1);
  s.insert(3);
  s.insert(2);
  s.insert(5);
  s.insert(4);

  cout << "Elements in the set: ";
  for(auto it = s.begin(); it != s.end(); ++it){
    cout << *it << " ";
  }
  cout << endl;

  s.erase(3);
  cout << "Elements in the set after erasing 3: ";
  for(auto it = s.begin(); it != s.end(); ++it){
    cout << *it << " ";
  }
  cout << endl;

  if(s.empty()){
    cout << "Set is empty" << endl;
  } else {
    cout << "Set is not empty" << endl;
  }

  auto it = s.find(2);
  if(it != s.end()){
    cout << "Element 2 found in the set" << endl;
  } else {
    cout << "Element 2 not found in the set" << endl;
  }
}