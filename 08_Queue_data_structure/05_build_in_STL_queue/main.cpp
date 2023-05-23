#include<bits/stdc++.h>
using namespace std;
int main(){
  queue<int> q;
  //enqueue
  q.push(12);
  q.push(14);
  q.push(16);
  //size
  cout<<q.size()<<'\n';
  //empty
  cout<<q.empty()<<'\n';
   //dequeue
  q.pop();
  //front
  cout<<q.front()<<'\n';
  q.pop();
  cout<<q.front()<<'\n';
  q.pop();
  cout<<q.front()<<'\n';
  q.pop();
  //empty
  cout<<q.empty()<<'\n';
}
