#include<bits/stdc++.h>
using namespace std;
int main(){
  deque<int> dq;
  dq.push_back(10);
  dq.push_back(15);
  dq.push_back(20);
  cout<<dq.size()<<'\n';
  dq.pop_back();
  dq.pop_front();
  cout<<dq.front()<<'\n';
  cout<<dq.back()<<'\n';

}
