#include<bits/stdc++.h>
using namespace std;
class Queue{
public:
  int *q;
  int array_capacity;
  int l,r,size;
  Queue(){
    q=new int [1];
    array_capacity=1;
    l=0;
    r=-1;
    size=0;
  }
  void break_circular_theory(){
    if(l>r){
      int *temp = new int [array_capacity];
      int index;
      for(int i=l;i<array_capacity;i++){
        temp[index]=q[i];
        index++;
      }
      for(int i=0;i<r;i++){
        temp[index]=q[i];
        index++;
      }
      swap(temp,q);
      l=0;
      r=array_capacity-1;
      delete []temp;
    }
  }
  void increase(){
    break_circular_theory();
    int *temp=new  int [array_capacity*2];
    for(int i=0;i<array_capacity;i++){
      temp[i]=q[i];
    }
    swap(q,temp);
    array_capacity=array_capacity*2;
    delete []temp;

  }
  void enqueue(int value){
    if(size==array_capacity){
      increase();
    }
    r++;
    if(r==array_capacity){
      r=0;
    }
    q[r]=value;
    size++;
  }
  int front(){
    if(size==0){
      cout<<"Your queue is empty"<<'\n';
    }
    return q[l];

  }
  void dequeue(){
    if(size==0){
      cout<<"Your queue is empty"<<'\n';
    }
    l++;
    if(l==array_capacity){
      l=0;
    }
    size--;

  }
  int getsize(){
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
