#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int data;
  NODE *next_pointer;
  NODE *previous_pointer;
};
class DOUBLYLINKEDLIST{
public:
  NODE *head;
  int size;
  DOUBLYLINKEDLIST(){
    head=NULL;
    size=0;
  }
  NODE* CreateNodeFunc(int value){
    NODE* newnode= new NODE;
    newnode->data=value;
    newnode->next_pointer=NULL;
    newnode->previous_pointer=NULL;
    return newnode;
  }
  void InsertAtHeadFunc(int data){
    size++;
    NODE *newnode=CreateNodeFunc(data);
    if(head==NULL){
      head=newnode;
      return;
    }

    NODE *a=head;
    newnode->next_pointer=a;
    a->previous_pointer=newnode;
    head=newnode;
  }
  void DeleteAtHead(){
    if(head==NULL){
      cout<<"Linkedlist is empty\n";
      return;
    }
    NODE *a=head;
    NODE *b=head->next_pointer;
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
class STACK{
public:
  DOUBLYLINKEDLIST dl;
  int top(){
     if(dl.getSize()==0){
      cout<<"The list is empty\n";
      return -1;
     }
    return dl.head->data;
  }
  void push(int value){
    dl.InsertAtHeadFunc(value);
  }
  void pop(){
    if(dl.getSize()==0){
      cout<<"The list is empty\n";
      return;
    }
    dl.DeleteAtHead();
  }
};
int main(){
  STACK st;
  st.push(10);
  cout<<st.top()<<"\n";
  st.push(20);
  cout<<st.top()<<"\n";
  st.push(30);
  cout<<st.top()<<"\n";
  st.push(40);
  cout<<st.top()<<"\n";
  cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<"\n";
    cout<<"\n \n \n";
  st.pop();
  cout<<st.top()<<'\n';


}
