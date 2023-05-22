#include<bits/stdc++.h>
using namespace std;
template<typename T>
class NODE{
public:
  T data;
  NODE *next_pointer;
  NODE *previous_pointer;
};
template<typename T>
class DOUBLYLINKEDLIST{
public:
  NODE<T> *head;
  int size;
  DOUBLYLINKEDLIST(){
    head=NULL;
    size=0;
  }
  NODE<T>* CreateNodeFunc(T value){
    NODE<T>* newnode= new NODE<T>;
    newnode->data=value;
    newnode->next_pointer=NULL;
    newnode->previous_pointer=NULL;
    return newnode;
  }
  void InsertAtHeadFunc(T data){
    size++;
    NODE<T> *newnode=CreateNodeFunc(data);
    if(head==NULL){
      head=newnode;
      return;
    }

    NODE<T> *a=head;
    newnode->next_pointer=a;
    a->previous_pointer=newnode;
    head=newnode;
  }
  void DeleteAtHead(){
    if(head==NULL){
      cout<<"Linkedlist is empty\n";
      return;
    }
    NODE<T> *a=head;
    NODE<T> *b=head->next_pointer;
    delete a;
    if(b!=NULL){
      b->previous_pointer=NULL;
    }
    head=b;
  }
  int getSize(){
    return size;
  }

};
template<typename T>
class STACK{
public:
  DOUBLYLINKEDLIST<T> dl;
  T top(){
     if(dl.getSize()==0){
      cout<<"The list is empty\n";
      return -1;
     }
    return dl.head->data;
  }
  void push(T value){
    dl.InsertAtHeadFunc(value);
  }
  void pop(){
    if(dl.getSize()==0){
      cout<<"The list is empty\n";
      return;
    }
    dl.DeleteAtHead();
  }
  int getSize(){
    return dl.getSize();
  }
};
int main(){
  STACK<int> st;
  st.push(2);
  st.push(3);
  st.push(5);
  st.push(4);
  st.push(1);
  st.push(10);
  st.push(6);
  STACK<int> temp;
  while(st.getSize()>0){
    int t=st.top();
    st.pop();
    while(temp.getSize()>0){
      if(temp.top()<t){
        break;
      }
      st.push(temp.top());
      temp.pop();
    }
    temp.push(t);
  }
  swap(st,temp);
  while(st.getSize()>0){
    cout<<st.dl.top()<<'\n';
    st.pop();
  }
}
