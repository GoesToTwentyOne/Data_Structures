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

    Node *createNode(int value)
    {
        Node *newNode = new Node;
        newNode->data = value;
        newNode->next_pointer = NULL;
        return newNode;
    }

    void insertAtBeginning(int value)
    {
        size++;
        Node *a = createNode(value);
        a->next_pointer = head;
        head = a;
    }

    void insertAtEnd(int value)
    {
        size++;
        Node *a = createNode(value);
        if (head == NULL)
        {
            head = a;
            return;
        }
        Node *temp = head;
        while (temp->next_pointer != NULL)
        {
            temp = temp->next_pointer;
        }
        temp->next_pointer = a;
    }

    void insertAtPosition(int value, int position)
    {
        if (position < 0 || position > size)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        size++;
        Node *a = createNode(value);
        if (position == 0)
        {
            a->next_pointer = head;
            head = a;
            return;
        }
        int current_index = 0;
        Node *temp = head;
        while (current_index != position - 1)
        {
            temp = temp->next_pointer;
            current_index++;
        }
        a->next_pointer = temp->next_pointer;
        temp->next_pointer = a;
    }

    void deleteAtBeginning()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        Node *current = head;
        head = current->next_pointer;
        delete current;
        size--;
    }

    void deleteAtEnd()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        if (head->next_pointer == NULL)
        {
            delete head;
            head = NULL;
            size--;
            return;
        }
        Node *temp = head;
        while (temp->next_pointer->next_pointer != NULL)
        {
            temp = temp->next_pointer;
        }
        Node *b = temp->next_pointer;
        temp->next_pointer = NULL;
        delete b;
        size--;
    }

    void deleteAtPosition(int position)
    {
        if (position < 0 || position >= size)
        {
            cout << "Position out of bounds" << endl;
            return;
        }
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        size--;
        if (position == 0)
        {
            Node *temp = head;
            head = head->next_pointer;
            delete temp;
            return;
        }
        Node *temp = head;
        int current_index = 0;
        while (current_index != position - 1)
        {
            temp = temp->next_pointer;
            current_index++;
        }
        Node *b = temp->next_pointer;
        temp->next_pointer = b->next_pointer;
        delete b;
    }

    void traverse()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next_pointer;
        }
        cout << endl; // Print newline at the end of the list
    }

    int search_node(int value)
    {
        Node *temp = head;
        int index = 0;
        while (temp != NULL)
        {
            if (temp->data == value)
            {
                return index;
            }
            temp = temp->next_pointer;
            index++;
        }
        return -1;
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
};

int main()
{
    Linked_List list;
    list.insertAtBeginning(5);
    list.insertAtBeginning(100);
    list.insertAtBeginning(50);
    list.insertAtBeginning(10);
    list.insertAtEnd(15);
    list.insertAtPosition(205, 1);
    list.deleteAtBeginning();
    list.deleteAtEnd();
    list.deleteAtPosition(2);
    cout << list.search_node(50) << endl;

    cout << "Reversed list: ";
    list.reverse_list(list.head);
    cout << endl; // Print newline at the end of the reversed list
    list.traverse();
}
