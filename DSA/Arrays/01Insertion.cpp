#include <iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int a[n];

 //action: Insertion
  for(int i=0;i<n;i++){
    cin>>a[i];
  }

  //action: Traversal and Printing
  for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
  }

  return 0;
}