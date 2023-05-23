#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  queue<string> q;
  q.push("1");
  for(int i=1;i<=n;i++){
    cout<<"binary representaion of "<<i<<" is :-> "<<q.front()<<'\n';
    //store temp
    string temp=q.front();
    q.pop();
    //add zero | 1
    q.push(temp +"0");
    q.push(temp +"1");
  }



}
