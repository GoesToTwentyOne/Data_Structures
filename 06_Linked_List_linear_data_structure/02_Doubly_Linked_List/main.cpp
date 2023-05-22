#include<bits/stdc++.h>
using namespace std;
class NODE{
public:
  int data;
  NODE *next_pointer;
  NODE *previous_pointer;
};
class DoublyLinkedList{
public:
  NODE *head;
  int size;
  DoublyLinkedList(){
    head=NULL;
    size=0;
  }
  NODE* createNode(int value){
    NODE *newNode=new NODE;
    newNode->data=value;
    newNode->next_pointer=NULL;
    newNode->previous_pointer=NULL;
    return newNode;
  }
  void insert_At_Head(int value){
    size++;
    NODE *newNode= createNode(value);
    if(head == NULL){
      head=newNode;
      return;
    }
    newNode->next_pointer=head;
    head->previous_pointer=newNode;
    head=newNode;
  }
  void insert_At_Any_pos(int pos,int value){
    size++;
    NODE *newNode = createNode(value);
    if (pos == 0) {
      insert_At_Head(value);
      return;
    }
    NODE *a=head;
    int current_index=0;
    while(current_index!=pos-1){
      a=a->next_pointer;
      current_index++;
    }
    NODE *b=a->next_pointer;
    newNode->next_pointer=a->next_pointer;
    newNode->previous_pointer=a;
    b->previous_pointer=newNode;
    a->next_pointer=newNode;
  }
  void insert_At_Last(int value){
    size++;
    NODE *newNode = createNode(value);
    if (head == NULL) {
      insert_At_Head(value);
      return;
    }
    NODE *a = head;
    while (a->next_pointer != NULL) {
      a = a->next_pointer;
    }
    a->next_pointer = newNode;
    newNode->previous_pointer = a;
  }
  void delete_At_Head(){

    if(head == NULL){
      cout<<"underflow"<<'\n';
    }
    NODE *a=head;
    NODE *b=a->next_pointer;
    head=b;
    b->previous_pointer=NULL;
    delete a;
    size--;
  }
  void delete_At_Any_Pos(int pos){
    if(pos==0){
      delete_At_Head();
      return;
    }
    if(pos==size){
      delete_At_Last();
      return;
    }
    NODE *a= head;
    int current_index=0;
    while(current_index != pos){
      a=a->next_pointer;
      current_index++;
    }
    NODE *b=a->previous_pointer;
    NODE *c=a->next_pointer;
    if(b!= NULL){
      b->next_pointer=c;
    }
    if(c!= NULL){
      c->previous_pointer=b;
    }
    delete a;
    size--;
  }
  void delete_At_Last(){
    NODE *a=head;
    while(a->next_pointer->next_pointer!=NULL){
      a=a->next_pointer;
    }
    NODE *b=a->next_pointer;
    a->next_pointer=NULL;
    delete b;
    size --;
  }
  void traverse(){
    NODE *a=head;
    while(a!=NULL){
      cout<<a->data<<" ";
      a=a->next_pointer;
    }
    cout<<'\n';

  }
  int getSize(){
    return size;
  }
};
int main(){
  DoublyLinkedList dl;
  dl.insert_At_Head(10);
  dl.insert_At_Head(20);
  dl.insert_At_Last(30);
  dl.insert_At_Last(500);
  dl.insert_At_Head(10);
  dl.insert_At_Head(20);
  dl.insert_At_Last(30);
  dl.insert_At_Last(500);
  dl.traverse();
  dl.insert_At_Any_pos(2,800);
  dl.traverse();
  dl.delete_At_Head();
  dl.traverse();
  dl.delete_At_Last();
  dl.traverse();
  dl.delete_At_Any_Pos(2);
  dl.traverse();


}
