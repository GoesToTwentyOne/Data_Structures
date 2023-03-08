#include<bits/stdc++.h>
using namespace std;
class Node{
public:
  int data;
  Node *next_pointer;
};
class Linked_List{
public:
  Node *head;
  int size;
  Linked_List(){
    head=NULL;
    size=0;
  }
  Node* createNode(int value){
    Node *newnode=new Node;
    newnode->data=value;
    newnode->next_pointer= NULL;
    return newnode;
  }
  //Time complexity=O(1)
  void insert_At_Head(int value){
    size++;
    Node* a= createNode(value);
    if(head==NULL){
      head=a;
      return;
    }
    a->next_pointer=head;
    head=a;
  }
  //Time complexity= O(n)
  void insert_At_Last(int value){
    size++;
    Node* a = head;
    while (a->next_pointer != NULL) {
        a = a->next_pointer;
    }
    a->next_pointer = createNode(value);
  }
  //Time complexity= O(n)
  void insert_At_Any_pos(int pos,int value){
    if(pos>size){
      cout<<"Overflow\n";
    }
    if(pos==0){
      insert_At_Head(value);
    }
    if(pos==size){
      insert_At_Last(value);
    }
    size++;
    int current_index=0;
    Node* a=head;
    while(current_index != pos-1){
      a=a->next_pointer;
      current_index++;
    }
    Node* newnode= createNode(value);
    newnode->next_pointer=a->next_pointer;
    a->next_pointer=newnode;
  }
  void delete_At_Head(){
    if(head==NULL){
      return;
    }
    size--;
    Node* a=head;
    head=a->next_pointer;
    delete a;
  }
  void delete_At_Any_Pos(int pos){
    if(pos==0){
      delete_At_Head();
    }
    size--;
    int current_index=0;
    Node* a=head;
    while(current_index != pos-1){
      a=a->next_pointer;
    }
    Node* b=a->next_pointer;
    a->next_pointer=b->next_pointer;
    delete b;
  }
  //Time complexity= O(n)
  void traverse(){
    Node* a=head;
    while(a!=NULL){
      cout<<a->data<<" ";
      a=a->next_pointer;
    }
    cout<<'\n';
  }
  int distinctSearch(int value){
    Node* a=head;
    int index=0;
    while(a!=NULL){
      if(a->data==value){
        return index;
      }
      a=a->next_pointer;
      index++;
    }
    return -1;

  }
  void allPossibleSearch(int value){
    Node* a=head;
    int index=0;
    while(a!=NULL){
      if(a->data==value){
        cout<<index<<" ";
      }
      a=a->next_pointer;
      index++;
    }
    cout<<'\n';
  }
};
int main(){
  Linked_List li;
  li.insert_At_Head(10);
  li.insert_At_Head(20);
  li.insert_At_Head(30);
  li.insert_At_Head(20);
  li.traverse();
  cout<<li.distinctSearch(20)<<'\n';
  li.allPossibleSearch(20);
  li.insert_At_Last(4848);
  li.traverse();
  li.insert_At_Any_pos(2,45456);
  li.traverse();
  li.delete_At_Head();
  li.traverse();
  li.delete_At_Any_Pos(2);
  li.traverse();

}
