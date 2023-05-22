#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>primesSet;
  vector<bool>visited(n+1);
  for(int i=2;i<=n;i++){
    if(visited[i]==false){
      primesSet.push_back(i);
      for(int x=2;i*x<=n;x++){
        visited[i*x]=true;
      }
    }
  }
  for(int i=0;i<primesSet.size();i++){
    cout<<primesSet[i]<<" ";
  }
  cout<<'\n';
}
