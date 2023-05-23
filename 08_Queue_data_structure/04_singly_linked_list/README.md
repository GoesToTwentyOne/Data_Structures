# Queue Using Singly Linked List

## Introduction
A queue is a data structure that follows the FIFO (First-In-First-Out) principle. It is an abstract data type with two primary operations: enqueue (insertion) and dequeue (deletion). In this README, we'll discuss the implementation of a queue using a singly linked list.

## Table of Contents
- [Simulation with Example](#simulation-with-example)
- [Why You Should Learn It?](#why-you-should-learn-it)
- [Real-Life Example](#real-life-example)
- [How It Works](#how-it-works)
- [Complexity Analysis](#complexity-analysis)
- [Advantages and Disadvantages](#advantages-and-disadvantages)
- [Algorithm](#algorithm)
- [Pseudocode](#pseudocode)
- [Memory Representation](#memory-representation)
- [Memory Allocation and Garbage Collection](#memory-allocation-and-garbage-collection)
- [Limitation of Queue Using Singly Linked List](#limitation-of-queue-using-singly-linked-list)
- [Feedback](#feedback)
- [Quote to Inspire All](#quote-to-inspire-all)
- [Contribute](#contribute)
- [Teamwork](#teamwork)
- [Thanking Part](#thanking-part)
- [Acknowledgements](#acknowledgements)

## Simulation with Example
Let's demonstrate the usage of a queue implemented using a singly linked list through an example:

```cpp
#include <iostream>

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(T value) : data(value), next(nullptr) {}
};

template <typename T>
class Queue {
private:
    Node<T>* front;
    Node<T>* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    void enqueue(T value) {
        Node<T>* newNode = new Node<T>(value);

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return;
        }

        Node<T>* temp = front;
        front = front->next;

        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
    }

    T frontElement() {
        if (isEmpty()) {
            std::cout << "Queue is empty" << std::endl;
            return T();
        }

        return front->data;
    }

    bool isEmpty() {
        return (front == nullptr);
    }
};

int main() {
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);

    std::cout << "Front element of the queue: " << q.frontElement() << std::endl;

    q.dequeue();
    q.dequeue();

    std::cout << "Front element of the queue: " << q.frontElement() << std::endl;

    return 0;
}
```

Output:
```
Front element of the queue: 5
Front element of the queue: 7
```

## Why You Should Learn It?
Learning about queues and their implementation using a singly linked list is valuable because:
- Queues are fundamental data structures used in various applications.
- Understanding queues helps in solving problems efficiently, such as scheduling processes, managing network packets, and implementing breadth-first search algorithms.
- Implementing queues using a singly linked list provides a dynamic structure with efficient insertion and deletion operations.

## Real-Life Example
A real-life example of a queue can

 be seen in a ticketing system at a movie theater. People line up in a queue to purchase tickets, and the first person in line gets served first. The queue ensures fairness and maintains the order of customers.

## How It Works
A queue implemented using a singly linked list works as follows:
- The queue consists of nodes linked together in a linear fashion, with each node containing data and a pointer to the next node.
- The front pointer points to the first node in the queue, and the rear pointer points to the last node.
- Enqueue operation: A new node is added to the rear of the queue by updating the rear pointer and linking the new node to the previous last node.
- Dequeue operation: The node at the front of the queue is removed by updating the front pointer and deleting the old front node.
- Front operation: Retrieves the data value of the node at the front of the queue without modifying the queue.
- The queue follows the FIFO (First-In-First-Out) principle, meaning the first element added is the first to be removed.

## Complexity Analysis
The time complexity of the queue operations using a singly linked list is as follows:
- Enqueue operation: O(1)
- Dequeue operation: O(1)
- Front operation: O(1)

## Advantages and Disadvantages
Advantages of a queue implemented using a singly linked list:
- Dynamic size: The queue can dynamically grow and shrink as elements are added or removed.
- Efficient operations: Enqueue and dequeue operations have a constant time complexity of O(1).
- Simple implementation: The implementation using a singly linked list is relatively straightforward.

Disadvantages of a queue implemented using a singly linked list:
- Extra memory overhead: Each node in the linked list requires additional memory to store the node and the next pointer.
- Random access: Unlike an array-based implementation, accessing elements by index is not possible in a linked list.

## Algorithm
The following algorithms describe the operations of a queue using a singly linked list:

1. Enqueue:
   - Create a new node with the given value.
   - If the queue is empty, set both the front and rear pointers to the new node.
   - Otherwise, set the next pointer of the current rear node to the new node, and update the rear pointer to the new node.

2. Dequeue:
   - If the queue is empty, display an error message.
   - Otherwise, set a temporary pointer to the front node.
   - Move the front pointer to the next node.
   - If the front pointer becomes nullptr, set the rear pointer to nullptr as well.
   - Delete the temporary pointer.

3. Front:
   - If the queue is empty, display an error message.
   - Otherwise, return the data value of the front node.

## Pseudocode
```
Node structure:
    Node(data):
        self.data = data
        self.next = None

Queue class:
    Queue():
        self.front = None
        self.rear = None

    enqueue(value):
        newNode = Node(value)
        if isEmpty():
            front = newNode
            rear = newNode
        else:
            rear.next = newNode
            rear = newNode

    dequeue():
        if isEmpty():
            display "Queue is empty"
            return
        temp = front
        front = front.next
        if front is None:
            rear = None
        delete temp

    frontElement():
        if isEmpty():
            display "Queue is empty"
            return
        return front.data

    isEmpty():
        return (front is None)
```

## Memory Representation
The memory representation of the queue using a singly linked list can be visualized as follows:

```
   front          rear
     ↓              ↓


 +---+    +---+    +---+    +---+
    | 5 | -> | 6 | -> | 7 | -> |   |
    +---+    +---+    +---+    +---+
```

## Memory Allocation and Garbage Collection
- Memory is dynamically allocated for each node in the singly linked list.
- When a node is enqueued, memory is allocated for the new node.
- When a node is dequeued, the memory for the front node is deallocated to prevent memory leaks.
- Garbage collection (automatic memory management) handles deallocation of memory for nodes that are no longer reachable.

## Limitation of Queue Using Singly Linked List
The limitation of a queue implemented using a singly linked list is that it requires additional memory for storing the node pointers. This overhead can be significant when dealing with a large number of elements compared to an array-based implementation.

## Feedback
Your feedback is valuable in improving this implementation and README. If you have any suggestions, bug reports, or feature requests, please don't hesitate to open an issue or submit a pull request.

## Quote to Inspire All
> "The only way to do great work is to love what you do." - Steve Jobs

## Contribute
Contributions are always welcome! If you'd like to contribute to this project, please follow these steps:
1. Fork the repository
2. Create a new branch (`git checkout -b feature/your-feature-name`)
3. Make the necessary changes
4. Commit your changes (`git commit -am 'Add some feature'`)
5. Push to the branch (`git push origin feature/your-feature-name`)
6. Submit a pull request

## Teamwork
This project encourages collaboration and teamwork. If you'd like to collaborate on this project or have any ideas for improvement, feel free to reach out. Together, we can make it better!

## Thanking Part
Thank you for your interest in this queue implementation using a singly linked list. I hope it helps you understand the concepts better and encourages you to explore further.

## Acknowledgements
I would like to acknowledge the contributions of the open-source community and the valuable resources that have helped in creating this README file.
