#include<bits/stdc++.h>
using namespace std;
const int max_size=500;
class Queue{
public:
  int q[max_size];
  int l,r;
  Queue(){
    l=0;
    r=-1;
  }
  void enqueue(int value){
    if(r+1>=max_size){
      cout<<"Queue is full"<<'\n';
    }
    r++;
    q[r]=value;
  }
  void dequeue(){
    if(l>r){
      cout<<"Your queue is empty"<<'\n';
    }
    l++;

  }
  int size(){
    return r-l+1;
  }

};
int main(){
  Queue q;
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(5);
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(6);
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(7);
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.dequeue();
  cout<<"Size of queue: "<<q.size()<<'\n';



}
