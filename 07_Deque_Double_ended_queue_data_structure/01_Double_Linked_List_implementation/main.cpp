#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int data;
  NODE* next_pointer;
  NODE* previous_pointer;
};
class DEQUE{
public:
  NODE* head;
  NODE* tail;
  int size;
  DEQUE(){
    head=NULL;
    tail=NULL;
    size=0;
  }
  NODE* createNewNode(int value){
    NODE* newnode=new NODE;
    newnode->next_pointer=NULL;
    newnode->previous_pointer=NULL;
    newnode->data = value;
    return newnode;
  }
  void push_back(int value){
    NODE* newnode= createNewNode(value);
    if(size==0){
      head = newnode;
      tail= newnode;
      size++;
    }
    tail->next_pointer=newnode;
    newnode->previous_pointer=tail;
    tail=newnode;
    size++;

  }
  void push_front(int value){
    NODE* newnode=createNewNode(value);
    if(size==0){
      head=newnode;
      tail=newnode;
      return;
    }
    head->previous_pointer=newnode;
    newnode->next_pointer=head;
    head=newnode;
    size++;
  }
  void pop_back(){
    if(size==0){
      cout<<"your deque is empty"<<'\n';
    }
    if(size==1){
      delete tail;
      head=NULL;
      tail=NULL;
      size--;
    }
    NODE* a=tail;
    tail=tail->previous_pointer;
    delete a;
    tail-> next_pointer=NULL;
    size--;
  }
  void pop_front(){
    if(size==0){
      cout<<"your deque is empty"<<'\n';
    }
    if(size==1){
      delete head;
      head=NULL;
      tail=NULL;
      size--;
    }
    NODE* a = head;
    head=head->next_pointer;
    delete a;
    head->previous_pointer=NULL;
    size--;

  }
  int front(){
    if(size==0){
      cout<<"your queue is empty"<<"\n";
    }
    return head->data;
  }
  int back(){
    if(size==0){
      cout<<"your queue is empty"<<"\n";
    }
    return tail->data;
  }
};
int main(){
  DEQUE d;
  d.push_back(5);
  d.push_back(10);
  d.push_back(15);
  cout<<"Front :"<<d.front()<<" Back: "<<d.back()<<"\n";
  d.push_front(20);
  cout<<"Front :"<<d.front()<<" Back: "<<d.back()<<"\n";
  d.pop_back();
  cout<<"Front :"<<d.front()<<" Back: "<<d.back()<<"\n";
  d.pop_front();
  cout<<"Front :"<<d.front()<<" Back: "<<d.back()<<"\n";

}
