#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,sum=0;
  cin>>n;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      cout << i << '\n';
      cout<<n/i<<'\n';
    }
  }

//time complexity=O(√n)
//space complexity=O(1);
