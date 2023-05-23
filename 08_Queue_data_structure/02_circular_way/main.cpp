#include<bits/stdc++.h>
using namespace std;
const int max_size=500;
class Queue{
public:
  int q[max_size];
  int l,r,size;
  Queue(){
    l=0;
    r=-1;
    size=0;
  }
  void enqueue(int value){
    //check queue is full
    if(size==max_size){
      cout<<"Queue is full"<<'\n';
    }
    r++;
    //check cross the broder or not
    //if cross the border then r = 0 set
    if(r==max_size){
      r=0;
    }
    q[r]=value;
    size++;
  }
  int front(){
    if(size==0){
      cout<<"Your queue is empty"<<'\n';
      return -1;
    }
    return q[l];

  }
  void dequeue(){
    if(size==0){
      cout<<"Your queue is empty"<<'\n';
    }
    l++;
    //check cross the broder or not
    //if cross the border then r = 0 set
    if(l==max_size){
      l=0;
    }
    size--;

  }
  int getsize(){
    //if(l<r):: r-l+1
    //if(l>r)::n-l+r+1
    return size;
  }

};
int main(){
  Queue q;
  cout<<"Size of queue: "<<q.getsize()<<'\n';
  q.enqueue(5);
  cout<<"Size of queue: "<<q.getsize()<<'\n';
  q.enqueue(6);
  cout<<"Size of queue: "<<q.getsize()<<'\n';
  q.enqueue(7);
  cout<<"Size of queue: "<<q.getsize()<<'\n';
  cout<<"font element of queue: "<<q.front()<<'\n';
  q.dequeue();
  cout<<"Size of queue: "<<q.getsize()<<'\n';



}
