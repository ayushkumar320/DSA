#include<iostream>
using namespace std;

void fun(int *A, int n){
  // cout<<sizeof(A)/sizeof(int);
  A[0] = 15;
  for(int i = 0; i < n; i++){
    cout<<A[i]<<" ";
  }
}

int main(){
  int A[] = {2,4,6,8,10};
  int n = 5;

  fun(A, n);

  // For each loop to priont array
  for(int x:A) {
    cout<<x<<endl;
  }
  return 0;
}