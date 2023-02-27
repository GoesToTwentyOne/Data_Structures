#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  vector<int> a(n);
  for(int i=0;i<n;i++){
    if(a[i]==k){
      cout<<i<<"  index"<<" ";
    }
  }
  cout<<'\n';
}
//time complexity=O(n);
