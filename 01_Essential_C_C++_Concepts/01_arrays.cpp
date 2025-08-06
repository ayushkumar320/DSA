#include<iostream>
using namespace std;

int main() {
  
  // Intializing an Array!
  int A[5]; // This initialized an array
  A[0] = 12;
  A[1] = 15;
  A[2] = 25;    // The unalloted index values gets assigned with garbage value!

  // Another way to initialize
  int B[] = {2, 4, 6, 8, 10};   // Here we need not give size as it takes based on elements assigned!

  int C[10] = {2, 4};      // Rest all the value becomes 0!

  for (int i = 0 ; i < 10; i++){
    cout<<C[i]<<" ";
  }

  cout<<"\n";
  
  for (int i = 0; i<5; i++){
    cout<<A[i]<<endl;
  }

  cout<<sizeof(A)<<endl;   // Single element takes 4 byte space

  // We can even use C codes
  printf("%d\n", A[2]); // This does not give error, if it gives we can fix this by importing stdio.h
  
  // We can also use for each loop
  for(int x: A) {
    cout<<x<<" ";
  }

  // Making dynamic arrays by accepting the input from the user!

  int n;
  cout<<"Enter the size of the array: ";
  cin>>n;
  int D[n];  // Declaring an array of user's entered size.

  // Reading the values in the array
  for (int i = 0; i < n; i++){
    cout<<"Enter the "<<i+1<<" element\n";
    cin>>D[i];
  }

  // Displaying the array
  for(int i = 0; i < n; i++){
    cout<<D[i]<<endl;
  }

  return 0;
}