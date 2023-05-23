# Deque using Doubly Linked List (Reverse Deque)

This repository provides an implementation of a Deque (Double-ended Queue) data structure using a doubly linked list in C++. The Deque allows insertion and deletion of elements from both ends efficiently. This implementation includes a functionality to reverse the Deque.

## Table of Contents
- [Simulation with Example and Visualization](#simulation-with-example-and-visualization)
- [Why You Should Learn It?](#why-you-should-learn-it)
- [Real-life Example](#real-life-example)
- [How It Works](#how-it-works)
- [Complexity Analysis](#complexity-analysis)
- [Advantages and Disadvantages](#advantages-and-disadvantages)
- [Algorithm](#algorithm)
- [Pseudocode](#pseudocode)
- [Memory Representation with Calculation](#memory-representation-with-calculation)
- [Memory Allocation](#memory-allocation)
- [Garbage Collection](#garbage-collection)
- [Limitation of Deque using Doubly Linked List (Reverse Deque)](#limitation-of-deque-using-doubly-linked-list-reverse-deque)
- [Feedback](#feedback)
- [Quote to Inspire All](#quote-to-inspire-all)
- [Contribute Invitation](#contribute-invitation)
- [Team Work](#team-work)
- [Thanking Part](#thanking-part)
- [Acknowledgements](#acknowledgements)

## Simulation with Example and Visualization

To demonstrate the usage and functionality of the Deque with reverse capability, consider the following example:

```cpp
#include<bits/stdc++.h>
using namespace std;

// Deque Node structure
class NODE {
public:
  int data;
  NODE* next_pointer;
  NODE* previous_pointer;
};

// Deque class
class DEQUE {
public:
  NODE* head;
  NODE* tail;
  int size;
  int reverse;

  // Constructor
  DEQUE() {
    head = NULL;
    tail = NULL;
    size = 0;
    reverse = 0;
  }

  // Creates a new node with the given value
  NODE* createNewNode(int value) {
    NODE* newnode = new NODE;
    newnode->next_pointer = NULL;
    newnode->previous_pointer = NULL;
    newnode->data = value;
    return newnode;
  }

  // Inserts a new node at the tail of the deque
  void insert_At_Tail(int value) {
    NODE* newnode = createNewNode(value);
    if(size == 0) {
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

  // Inserts a new node at the head of the deque
  void insert_At_Head(int value) {
    NODE* newnode = createNewNode(value);
    if(size == 0) {
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

  // Adds an element to the back of the deque
  void push_back(int value) {
    if(reverse == 0) {
      insert_At_Tail(value);
    }
    else {
      insert_At_Head(value);
    }
  }

  // Adds an element to the front of the deque
  void push_front(int value) {
    if(reverse == 0) {
      insert_At_Head

(value);
    }
    else {
      insert_At_Tail(value);
    }
  }

  // Deletes the last element of the deque
  void delete_At_Last() {
    if(size == 0) {
      cout << "Your deque is empty <underflow>" << '\n';
      return;
    }
    if(size == 1) {
      delete tail;
      head = NULL;
      tail = NULL;
      size--;
    }
    else {
      NODE* a = tail;
      tail = tail->previous_pointer;
      delete a;
      tail->next_pointer = NULL;
      size--;
    }
  }

  // Deletes the first element of the deque
  void delete_At_First() {
    if(size == 0) {
      cout << "Your deque is empty <underflow>" << '\n';
      return;
    }
    if(size == 1) {
      delete head;
      head = NULL;
      tail = NULL;
      size--;
    }
    else {
      NODE* a = head;
      head = head->next_pointer;
      delete a;
      head->previous_pointer = NULL;
      size--;
    }
  }

  // Removes the last element from the deque
  void pop_back() {
    if(reverse == 0) {
      delete_At_Last();
    }
    else {
      delete_At_First();
    }
  }

  // Removes the first element from the deque
  void pop_front() {
    if(reverse == 0) {
      delete_At_First();
    }
    else {
      delete_At_Last();
    }
  }

  // Returns the front element of the deque
  int front() {
    if(size == 0) {
      cout << "Your queue is empty" << "\n";
      return -1; // Return a default value or handle the error appropriately
    }
    if(reverse == 0) {
      return head->data;
    }
    else {
      return tail->data;
    }
  }

  // Returns the back element of the deque
  int back() {
    if(size == 0) {
      cout << "Your queue is empty" << "\n";
      return -1; // Return a default value or handle the error appropriately
    }
    if(reverse == 0) {
      return tail->data;
    }
    else {
      return head->data;
    }
  }

  // Reverses the deque
  void reverse_DEQUE() {
    if(reverse == 0) {
      reverse = 1;
    }
    else {
      reverse = 0;
    }
  }
};

int main() {
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
```

This example demonstrates the usage of the Deque class with various operations such as pushing elements to the front and back, popping elements from the front and back, and reversing the deque. The `front()` and `back()` functions are used to retrieve the front and back elements of the deque, respectively.

## Why You Should Learn It?

Understanding and

 implementing data structures like the Deque using a doubly linked list with reverse capability can be beneficial for several reasons:

- **Versatility**: Deques provide a flexible data structure that allows efficient insertion and deletion from both ends. They can be used in various scenarios where elements need to be added or removed from either end.
- **Efficiency**: Deques offer constant time complexity for most operations, such as insertion and deletion from both ends, making them efficient for real-time applications and data processing.
- **Complexity Analysis**: Learning and analyzing the time and space complexity of different deque operations can improve your understanding of algorithmic performance and help you design more efficient solutions.
- **Real-life Applications**: Deques find applications in diverse domains such as computer science, software engineering, data analysis, and more. Understanding deques can enhance your ability to solve real-life problems efficiently.

## Real-life Example

One real-life example where a deque can be used is in the management of a printer queue. In a printing system, users submit their print jobs, which need to be processed and printed. A deque can be used to store the print jobs, with new jobs being added to the back and completed jobs being removed from the front. The reverse capability of the deque can be useful if the printing priority changes or if there is a need to revisit previously completed jobs.

## How It Works

The Deque implemented using a doubly linked list with reverse capability works as follows:

- The Deque class consists of a `head` pointer, a `tail` pointer, a `size` variable to keep track of the number of elements in the deque, and a `reverse` flag indicating the current state of the deque (normal or reversed).
- Each node in the deque, represented by the `NODE` class, contains a `data` value, a `next_pointer` pointing to the next node, and a `previous_pointer` pointing to the previous node.
- Elements can be added to the deque using the `push_front` or `push_back` methods, depending on the reverse state.
- Elements can be removed from the deque using the `pop_front` or `pop_back` methods, also depending on the reverse state.
- The `front` and `back` methods return the front and back elements of the deque, respectively, based on the current state.
- The `reverse_DEQUE` method reverses the deque by toggling the `reverse` flag.

## Complexity Analysis

The Deque implemented using a doubly linked list with reverse capability has the following time and space complexity for various operations:

- Insertion and deletion at the front or back: O(1) time complexity.
- Accessing the front or back element: O(1) time complexity.
- Reversing the deque: O(1) time complexity.
- Space complexity: O(n), where n is the number of elements in the deque.

## Advantages and Disadvantages

Advantages of using a Deque implemented using a doubly linked list with reverse capability:

- Efficient insertion and deletion at both ends of the deque.
- Constant time complexity for most operations.
- Flexibility to reverse the deque as needed.
- Simple implementation using basic data structures.

Disadvantages of using a Deque implemented using a doubly linked list with reverse capability:

- Slightly higher space complexity compared to arrays or vectors.
- Additional memory overhead for maintaining the doubly linked list structure.

## Algorithm

The algorithm for the Deque implemented using a doubly linked list with reverse capability includes the following steps:

1. Initialize the Deque with empty `head` and `tail` pointers, a `size` variable set to 0, and a `reverse` flag set to 0.
2. Implement methods to create a new node, insert a node at the

 head, insert a node at the tail, delete a node from the head, and delete a node from the tail.
3. Implement methods to push an element to the front or back of the deque, pop an element from the front or back, and access the front or back element.
4. Implement a method to reverse the deque by toggling the `reverse` flag.
5. Test the Deque implementation with various operations and scenarios.

## Pseudocode

The pseudocode for the Deque implemented using a doubly linked list with reverse capability is as follows:

```
class NODE:
  data
  next_pointer
  previous_pointer

class DEQUE:
  head
  tail
  size
  reverse

  DEQUE():
    head = NULL
    tail = NULL
    size = 0
    reverse = 0

  createNewNode(value):
    newnode = new NODE
    newnode.next_pointer = NULL
    newnode.previous_pointer = NULL
    newnode.data = value
    return newnode

  insert_At_Tail(value):
    newnode = createNewNode(value)
    if size == 0:
      head = newnode
      tail = newnode
      size++

    else:
      tail.next_pointer = newnode
      newnode.previous_pointer = tail
      tail = newnode
      size++

  insert_At_Head(value):
    newnode = createNewNode(value)
    if size == 0:
      head = newnode
      tail = newnode
      return

    else:
      head.previous_pointer = newnode
      newnode.next_pointer = head
      head = newnode
      size++

  push_back(value):
    if reverse == 0:
      insert_At_Tail(value)

    else:
      insert_At_Head(value)

  push_front(value):
    if reverse == 0:
      insert_At_Head(value)

    else:
      insert_At_Tail(value)

  delete_At_Last():
    if size == 0:
      print "Your deque is empty <underflow>"
      return

    if size == 1:
      delete tail
      head = NULL
      tail = NULL
      size--

    else:
      a = tail
      tail = tail.previous_pointer
      delete a
      tail.next_pointer = NULL
      size--

  delete_At_First():
    if size == 0:
      print "Your deque is empty <underflow>"
      return

    if size == 1:
      delete head
      head = NULL
      tail = NULL
      size--

    else:
      a = head
      head = head.next_pointer
      delete a
      head.previous_pointer = NULL
      size--

  pop_back():
    if reverse == 0:
      delete_At_Last()

    else:
      delete_At_First()

  pop_front():
    if reverse == 0:
      delete_At_First()

    else:
      delete_At_Last()

  front():
    if size == 0:
      print "Your queue is empty"
      return -1

    if reverse == 0:
      return head.data

    else:
      return tail.data

  back():
    if size == 0:
      print "Your queue is empty"
      return -1

    if reverse == 0:
      return tail.data

    else:
      return head.data

  reverse_DEQUE():
    if reverse == 0:
      reverse = 1

    else:
      reverse = 0
```

## Memory Representation with Calculation

The memory representation of the Deque implemented using a doubly linked list with reverse capability is as follows:

```
DEQUE:
  head -> [NODE]
  tail -> [NODE]


 size -> 3
  reverse -> 1

NODE:
  data -> 10
  next_pointer -> [NODE]
  previous_pointer -> [NODE]
```

In the memory representation above, the `DEQUE` object has a `head` pointer pointing to the first node in the deque, a `tail` pointer pointing to the last node in the deque, a `size` variable storing the number of elements in the deque, and a `reverse` flag indicating the state of the deque. Each `NODE` object represents a node in the doubly linked list and contains the `data` value, a `next_pointer` pointing to the next node, and a `previous_pointer` pointing to the previous node.

The memory required to store the deque depends on the number of elements in the deque. Each node in the deque requires memory for the data value, the next pointer, and the previous pointer. Additionally, the deque object itself requires memory to store the head pointer, tail pointer, size variable, and reverse flag. The total memory required can be calculated as follows:

```
Total Memory = Memory for DEQUE object + (Memory for each NODE object * Number of elements in the deque)
```

It's important to note that the memory representation and calculation provided here are simplified for conceptual understanding and may not reflect the exact memory layout and calculations in specific programming languages or environments. The actual memory representation and calculation may vary based on the implementation details and memory management of the programming language or environment used.
