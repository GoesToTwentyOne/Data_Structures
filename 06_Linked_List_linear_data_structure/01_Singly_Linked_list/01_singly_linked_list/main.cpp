#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
  int data;
  Node *next_pointer;
};

class Linked_List
{
public:
  Node *head;
  int size;
  Linked_List()
  {
    head = NULL;
    size = 0;
  }
  // create a new node : data= value, next_pointer=NULL
  Node *createNode(int value)
  {
    Node *newnode = new Node;
    newnode->data = value;
    newnode->next_pointer = NULL;
    return newnode;
  }
  // Time complexity=O(1)
  void insert_At_Head(int value)
  {
    size++;
    Node *a = createNode(value);
    if (head == NULL)
    {
      head = a;
      return;
    }
    a->next_pointer = head;
    head = a;
  }
  // Time complexity= O(n)
  void insert_At_Last(int value)
  {
    size++;
    Node *a = head;
    if (a == NULL)
    {
      head = createNode(value);
      return;
    }
    while (a->next_pointer != NULL)
    {
      a = a->next_pointer;
    }
    a->next_pointer = createNode(value);
  }
  // Time complexity= O(n)
  void insert_At_Any_pos(int pos, int value)
  {
    if (pos > size || pos < 0)
    {
      cout << "Overflow\n";
      return;
    }
    if (pos == 0)
    {
      insert_At_Head(value);
      return;
    }
    if (pos == size)
    {
      insert_At_Last(value);
      return;
    }
    size++;
    int current_index = 0;
    Node *a = head;
    while (current_index != pos - 1)
    {
      a = a->next_pointer;
      current_index++;
    }
    Node *newnode = createNode(value);
    newnode->next_pointer = a->next_pointer;
    a->next_pointer = newnode;
  }
  void delete_At_Head()
  {
    if (head == NULL)
    {
      cout << "underflow" << '\n';
      return;
    }
    size--;
    Node *a = head;
    head = a->next_pointer;
    delete a;
  }
  void delete_At_Any_Pos(int pos)
  {
    if (pos < 0 || pos >= size)
    {
      cout << "Invalid position\n";
      return;
    }
    if (pos == 0)
    {
      delete_At_Head();
      return;
    }
    size--;
    int current_index = 0;
    Node *a = head;
    while (current_index != pos - 1)
    {
      a = a->next_pointer;
      current_index++;
    }
    Node *b = a->next_pointer;
    a->next_pointer = b->next_pointer;
    delete b;
  }
  void delete_At_Last()
  {
    if (head == NULL)
    {
      cout << "underflow" << '\n';
      return;
    }
    if (head->next_pointer == NULL)
    {
      delete head;
      head = NULL;
      size--;
      return;
    }
    Node *a = head;
    while (a->next_pointer->next_pointer != NULL)
    {
      a = a->next_pointer;
    }
    Node *b = a->next_pointer;
    a->next_pointer = NULL;
    delete b;
    size--;
  }
  // Time complexity= O(n)
  void traverse()
  {
    Node *a = head;
    while (a != NULL)
    {
      cout << a->data << " ";
      a = a->next_pointer;
    }
    cout << '\n';
  }
  int distinctSearch(int value)
  {
    Node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (a->data == value)
      {
        return index;
      }
      a = a->next_pointer;
      index++;
    }
    return -1;
  }
  void allPossibleSearch(int value)
  {
    Node *a = head;
    int index = 0;
    while (a != NULL)
    {
      if (a->data == value)
      {
        cout << value << " is found at :" << index << "\t";
      }
      a = a->next_pointer;
      index++;
    }
    cout << '\n';
  }

  void reverse_list(Node *a)
  {
    if (a == NULL)
    {
      return;
    }
    if (a->next_pointer != NULL)
    {
      reverse_list(a->next_pointer);
    }
    cout << a->data << " ";
  }

  // insert after a value
  void after_A_value(int value, int data)
  {
    Node *a = head;
    while (a != NULL)
    {
      if (a->data == value)
      {
        break;
      }
      a = a->next_pointer;
    }
    if (a == NULL)
    {
      cout << "value doesn't exist" << '\n';
      return;
    }
    Node *newnode = createNode(data);
    newnode->next_pointer = a->next_pointer;
    a->next_pointer = newnode;
  }
};

int main()
{
  Linked_List li;
  li.insert_At_Head(10);
  li.insert_At_Head(20);
  li.insert_At_Head(30);
  li.insert_At_Head(20);
  li.traverse();
  cout << "20 is found at : " << li.distinctSearch(20) << '\n';
  li.allPossibleSearch(20);
  li.insert_At_Last(4848);
  li.traverse();
  li.insert_At_Any_pos(2, 45456);
  li.traverse();
  li.delete_At_Head();
  li.traverse();
  li.delete_At_Any_Pos(2);
  li.traverse();
  li.delete_At_Last();
  li.traverse();
  li.after_A_value(30, 100);
  cout << "Reversed list: ";
  li.reverse_list(li.head);
  cout << endl;
  li.traverse();
}
