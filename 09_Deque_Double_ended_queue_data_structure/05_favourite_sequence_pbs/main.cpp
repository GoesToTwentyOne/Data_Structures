#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  int n;
  while(t--){
    cin>>n;
    deque <int> seq;
    int x;
    for(int i = 0; i < n; i++){
      cin>>x;
      seq.push_back(x);
    }
    bool check = false;
    for(int i = 0; i < n; i++){
      check = !check;
      if(check){
        cout<<seq.front()<<" ";
        seq.pop_front();
      }
      else{
        cout<<seq.back()<<" ";
        seq.pop_back();
      }
    }
    cout<<endl;
  
}
}