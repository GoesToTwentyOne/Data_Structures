#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0;
  cin>>n;
  vector<int> a(n*n);
  for(int i=0;i<n*n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n*n;i++){
    sum+=a[i];
  }
  cout<<sum<<'\n';
}
//time complexity=O(n^2)
//space complexity=O(n^2);
