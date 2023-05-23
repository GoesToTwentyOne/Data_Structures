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
  int reverse;

  DEQUE(){
    head = NULL;
    tail = NULL;
    size = 0;
    reverse = 0;
  }

  NODE* createNewNode(int value){
    NODE* newnode = new NODE;
    newnode->next_pointer = NULL;
    newnode->previous_pointer = NULL;
    newnode->data = value;
    return newnode;
  }

  void insert_At_Tail(int value){
    NODE* newnode = createNewNode(value);
    if(size == 0){
      head = newnode;
      tail = newnode;
      size++;
    }
    else {
      tail->next_pointer = newnode;
      newnode->previous_pointer = tail;
      tail = newnode;
      size++;
    }
  }

  void push_back(int value){
    if(reverse == 0){
      insert_At_Tail(value);
    }
    else{
      insert_At_Head(value);
    }
  }

  void insert_At_Head(int value){
    NODE* newnode = createNewNode(value);
    if(size == 0){
      head = newnode;
      tail = newnode;
      return;
    }
    else {
      head->previous_pointer = newnode;
      newnode->next_pointer = head;
      head = newnode;
      size++;
    }
  }

  void push_front(int value){
    if(reverse == 0){
      insert_At_Head(value);
    }
    else{
      insert_At_Tail(value);
    }
  }

  void delete_At_Last(){
    if(size == 0){
      cout << "Your deque is empty <underflow>" << '\n';
      return;
    }
    if(size == 1){
      delete tail;
      head = NULL;
      tail = NULL;
      size--;
    }
    else{
      NODE* a = tail;
      tail = tail->previous_pointer;
      delete a;
      tail->next_pointer = NULL;
      size--;
    }
  }

  void pop_back(){
    if(reverse == 0){
      delete_At_Last();
    }
    else{
      delete_At_First();
    }
  }

  void delete_At_First(){
    if(size == 0){
      cout << "Your deque is empty <underflow>" << '\n';
      return;
    }
    if(size == 1){
      delete head;
      head = NULL;
      tail = NULL;
      size--;
    }
    else{
      NODE* a = head;
      head = head->next_pointer;
      delete a;
      head->previous_pointer = NULL;
      size--;
    }
  }

  void pop_front(){
    if(reverse == 0){
      delete_At_First();
    }
    else{
      delete_At_Last();
    }
  }

  int front(){
    if(size == 0){
      cout << "Your queue is empty" << "\n";
      return -1; // Return a default value or handle the error appropriately
    }
    if(reverse == 0){
      return head->data;
    }
    else{
      return tail->data;
    }
  }

  int back(){
    if(size == 0){
      cout << "Your queue is empty" << "\n";
      return -1; // Return a default value or handle the error appropriately
    }
    if(reverse == 0){
      return tail->data;
    }
    else{
      return head->data;
    }
  }

  void reverse_DEQUE(){
    if(reverse == 0){
      reverse = 1;
    }
    else{
      reverse = 0;
    }
  }
};

int main(){
  DEQUE d;
  d.push_back(5);
  d.push_back(10);
  d.push_back(15);
  d.push_front(20);
  d.reverse_DEQUE();
  cout << "Front: " << d.front() << " Back: " << d.back() << "\n";
  d.push_front(20);
  cout << "Front: " << d.front() << " Back: " << d.back() << "\n";
  d.pop_back();
  cout << "Front: " << d.front() << " Back: " << d.back() << "\n";
  d.pop_front();
  cout << "Front: " << d.front() << " Back: " << d.back() << "\n";

  return 0;
}
