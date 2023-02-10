#include<bits/stdc++.h>
using namespace std;
template<typename T>
class NODE{
public:
  T data;
  NODE* next_pointer;
  NODE* previous_pointer;
};
template<typename T>
class DEQUE{
public:
  NODE<T>* head;
  NODE<T>* tail;
  int size;
  DEQUE(){
    head=NULL;
    tail=NULL;
    size=0;
  }
  NODE<T>* createNewNode(T value){
    NODE<T>* newnode=new NODE<T>;
    newnode->next_pointer=NULL;
    newnode->previous_pointer=NULL;
    newnode->data = value;
    return newnode;
  }
  void push_back(T value){
    NODE<T>* newnode= createNewNode(value);
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
  void push_front(T value){
    NODE<T>* newnode=createNewNode(value);
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
    NODE<T>* a=tail;
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
    NODE<T>* a = head;
    head=head->next_pointer;
    delete a;
    head->previous_pointer=NULL;
    size--;

  }
  T front(){
    if(size==0){
      cout<<"your queue is empty"<<"\n";
    }
    return head->data;
  }
  T back(){
    if(size==0){
      cout<<"your queue is empty"<<"\n";
    }
    return tail->data;
  }
};
int main(){
  DEQUE<int> d;
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
