#include<iostream>
using namespace std;

int main () {
  
  int A[5] = {2, 4, 6, 8, 10};

  int* p = A;             // We dont need to give &A as A itself address

  for(int i = 0; i < 5; i++){
    cout<<p[i]<<endl;       // Here p is acting like a name of an array
  }

  return 0;
}