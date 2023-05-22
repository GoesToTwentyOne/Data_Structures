#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int  data;
  NODE* next_pointer;
};
class QUEUE{
public:
  NODE* head;
  NODE* tail;
  int size;
  QUEUE(){
    head=NULL;
    tail=NULL;
    size=0;
  }
  NODE* createNode(int value){
    NODE* newNode=new NODE;
    newNode->data=value;
    newNode->next_pointer=NULL;
    return newNode;
  }
  void enqueue(int value){
    size++;
    NODE* newNode=createNode(value);
    if(head==NULL){
      head=newNode;
      tail=newNode;
      return;
    }
    tail->next_pointer=newNode;
    tail=newNode;

  }
  void dequeue(){
    if(size==0){
      cout<<"your courrent queue is empty"<<'\n';
    }
    if(size==1){
      size--;
      delete head;
      head=NULL;
      tail=NULL;
    }
    size--;
    NODE* a=head;
    head=head->next_pointer;
    delete a;
  }
  int front(){
    if(size==0){
      cout<<"your queue is empty"<<'\n';
    }
    return head->data;

  }
  int getsize(){
    return size;
  }
};
int main(){
  QUEUE q;
  q.enqueue(5);
  q.enqueue(10);
  q.enqueue(15);
  q.dequeue();
  cout<<"Queue size is :"<<q.getsize()<<'\n';
  cout<<"Queue front is :"<<q.front()<<'\n';
  q.dequeue();
  cout<<"Queue size is :"<<q.getsize()<<'\n';
  cout<<"Queue front is :"<<q.front()<<'\n';
  q.dequeue();
  cout<<"Queue size is :"<<q.getsize()<<'\n';
  cout<<"Queue front is :"<<q.front()<<'\n';
}
