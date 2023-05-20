#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++){
    cin>>arr[i];
  }
  for(int pass=0;pass<n;pass++){
    int last=n-1-pass;
    for(int j=0;j<=last-1;j++){
      if(arr[j] > arr[j+1]) {
        swap(arr[j],arr[j+1]);
      }
    }
    cout<<"after pass: "<<pass<<", ";
    for(int i=0;i<n;i++){
      cout<<" "<<arr[i];
    }
    cout <<'\n';
  }
  cout<<"after Sorting Final: ";
  for(int i=0;i<n;i++){
    cout<<" "<<arr[i];
  }
  cout <<'\n';
  return 0;
}
