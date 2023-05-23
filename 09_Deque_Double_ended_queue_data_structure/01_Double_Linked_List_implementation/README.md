# Deque using Doubly Linked List

This README.md file provides an overview of Deque (Double Ended Queue) implemented using a doubly linked list. It includes an introduction, table of contents, simulation with examples and visualization, reasons to learn Deque, real-life examples, how it works, complexity analysis, advantages and disadvantages, algorithm, pseudocode, memory representation, memory allocation, garbage collection, limitations, feedback, a quote to inspire, contribution invitation, teamwork, thanking part, and acknowledgements.

## Introduction

A Deque, also known as a Double Ended Queue, is a linear data structure that allows efficient insertion and deletion of elements from both ends. In this implementation, a doubly linked list is utilized to achieve the required operations and maintain the flexibility of adding and removing elements from both the front and rear of the Deque.

## Table of Contents
1. [Simulation with Example and Visualization](#simulation-with-example-and-visualization)
2. [Why Should You Learn It?](#why-should-you-learn-it)
3. [Real-life Example](#real-life-example)
4. [How It Works](#how-it-works)
5. [Complexity Analysis for All Operations](#complexity-analysis-for-all-operations)
6. [Advantages and Disadvantages](#advantages-and-disadvantages)
7. [Algorithm and Pseudocode](#algorithm-and-pseudocode)
8. [Memory Representation with Calculation](#memory-representation-with-calculation)
9. [Memory Allocation and Garbage Collection](#memory-allocation-and-garbage-collection)
10. [Limitations of Deque using Doubly Linked List](#limitations-of-deque-using-doubly-linked-list)
11. [Feedback](#feedback)
12. [Quote to Inspire All](#quote-to-inspire-all)
13. [Contribute](#contribute)
14. [Teamwork](#teamwork)
15. [Thanking Part](#thanking-part)
16. [Acknowledgements](#acknowledgements)

## Simulation with Example and Visualization

To better understand the operations and behavior of a Deque implemented using a doubly linked list, let's simulate it with examples and visualize the operations clearly.

```python
# Python code for simulating Deque using a doubly linked list

class Node:
    def __init__(self, data):
        self.data = data
        self.prev = None
        self.next = None

class Deque:
    def __init__(self):
        self.front = None
        self.rear = None

    def is_empty(self):
        return self.front is None

    def push_front(self, data):
        new_node = Node(data)
        if self.is_empty():
            self.front = self.rear = new_node
        else:
            new_node.next = self.front
            self.front.prev = new_node
            self.front = new_node

    def push_back(self, data):
        new_node = Node(data)
        if self.is_empty():
            self.front = self.rear = new_node
        else:
            self.rear.next = new_node
            new_node.prev = self.rear
            self.rear = new_node

    def pop_front(self):
        if self.is_empty():
            return None
        data = self.front.data
        if self.front == self.rear:
            self.front = self.rear = None
        else:
            self.front = self.front.next
            self.front.prev = None
        return data

    def pop_back(self):
        if self.is_empty():
            return None
        data = self.rear.data
        if self.front == self.rear:
            self.front = self.rear = None
        else

:
            self.rear = self.rear.prev
            self.rear.next = None
        return data

    def get_front(self):
        return self.front.data if self.front else None

    def get_back(self):
        return self.rear.data if self.rear else None
```

Visualization:
```
Initially, the Deque is empty:
Deque: []

Pushing elements 10, 20 from front and 30, 40 from back:
Deque: [20, 10, 30, 40]

Popping elements from front and back:
Popped Front: 20
Popped Back: 40
Deque: [10, 30]

Getting front and back elements:
Front: 10
Back: 30
```

## Why Should You Learn It?

Learning Deque using a doubly linked list is beneficial because:
- Deque provides efficient insertion and deletion operations at both ends, making it suitable for many real-world scenarios.
- It allows flexibility in implementing various data structures and algorithms.
- Deque supports both LIFO (Last-In-First-Out) and FIFO (First-In-First-Out) operations, providing versatility in problem-solving.

By understanding Deque and its implementation using a doubly linked list, you gain a valuable tool to tackle a wide range of programming challenges.

## Real-life Example

A real-life example of using a Deque implemented with a doubly linked list can be seen in job scheduling systems. When multiple jobs are submitted to a scheduling system, they need to be organized and executed based on their priority or arrival order. A Deque allows for efficient job insertion and deletion, enabling the scheduling system to manage the jobs effectively.

## How It Works

A Deque using a doubly linked list maintains two pointers: a front pointer and a rear pointer. The front pointer indicates the beginning of the deque, and the rear pointer indicates the end. Elements can be added or removed from both ends of the deque.

When an element is pushed from the front, a new node is created and becomes the new front. If the deque is empty, both the front and rear pointers are set to the new node. Otherwise, the new node's next pointer is set to the current front, and the current front's prev pointer is set to the new node. The front pointer is then updated to the new node.

When an element is pushed from the back, a similar process occurs. The new node becomes the new rear, and the current rear's next pointer is set to the new node. The new node's prev pointer is set to the current rear, and the rear pointer is updated to the new node.

For pop operations, the front and rear elements are removed accordingly, and the pointers are updated to the next or previous nodes.

## Complexity Analysis for All Operations

The time complexity of common operations in Deque implemented using a doubly linked list is as follows:

| Operation        | Time Complexity |
|------------------|-----------------|
| Push Front       | O(1)            |
| Push Back        | O(1)            |
| Pop Front        | O(1)            |
| Pop Back         | O(1)            |
| Get Front/Back   | O(1)            |
| Is Empty         | O(1)            |

All operations have a constant time complexity, O(1), making the deque efficient for adding and removing elements from both ends.

## Advantages and Disadvantages

Advantages of using Deque with a doubly linked list:
- Efficient insertion and deletion at both ends.
- Flexibility in implementing various data structures and algorithms.
- Supports both LIFO and FIFO operations.

Disadvantages of using Deque with a doubly linked list:
- Additional memory overhead due to the need for maintaining

 the prev and next pointers in each node.
- More complex implementation compared to simpler data structures like a singly linked list or an array-based deque.

## Algorithm and Pseudocode

The algorithm for Deque implemented using a doubly linked list involves the following operations:

1. Initialize the front and rear pointers.
2. Implement the `push_front` operation:
   - Create a new node with the given data.
   - If the deque is empty, set the front and rear pointers to the new node.
   - Otherwise, set the new node's next pointer to the current front, and update the front pointer.
3. Implement the `push_back` operation:
   - Create a new node with the given data.
   - If the deque is empty, set the front and rear pointers to the new node.
   - Otherwise, set the current rear's next pointer to the new node, and update the rear pointer.
4. Implement the `pop_front` operation:
   - If the deque is empty, return `None`.
   - Otherwise, retrieve the data from the front node, update the front pointer, and remove the previous front node.
5. Implement the `pop_back` operation:
   - If the deque is empty, return `None`.
   - Otherwise, retrieve the data from the rear node, update the rear pointer, and remove the previous rear node.
6. Implement the `get_front` operation:
   - If the deque is empty, return `None`.
   - Otherwise, return the data from the front node.
7. Implement the `get_back` operation:
   - If the deque is empty, return `None`.
   - Otherwise, return the data from the rear node.
8. Implement the `is_empty` operation to check if the deque is empty.

Here's the pseudocode representation of the algorithm:

```plaintext
Deque using Doubly Linked List:

Node:
  data
  prev
  next

Deque:
  front
  rear

is_empty():
  return front is None

push_front(data):
  new_node = Node(data)
  if is_empty():
    front = rear = new_node
  else:
    new_node.next = front
    front.prev = new_node
    front = new_node

push_back(data):
  new_node = Node(data)
  if is_empty():
    front = rear = new_node
  else:
    rear.next = new_node
    new_node.prev = rear
    rear = new_node

pop_front():
  if is_empty():
    return None
  data = front.data
  if front == rear:
    front = rear = None
  else:
    front = front.next
    front.prev = None
  return data

pop_back():
  if is_empty():
    return None
  data = rear.data
  if front == rear:
    front = rear = None
  else:
    rear = rear.prev
    rear.next = None
  return data

get_front():
  return front.data if front else None

get_back():
  return rear.data if rear else None
```

## Memory Representation with Calculation

In a Deque using a doubly linked list, each node consists of three components:
- Data: Holds the value of the element being stored.
- Prev: A pointer that references the previous node.
- Next: A pointer that references the next node.

Let's assume the memory allocation for each of these components is constant.

The memory consumption of a Deque can be calculated as follows:

```
Memory Consumption = Number of Elements in Deque * (Memory for Data + Memory for Prev + Memory for Next)
```

Here, "Memory for Data" represents the memory required to store the data value, and "Memory for Prev" and "Memory for

 Next" represent the memory required for the prev and next pointers, respectively.

## Memory Allocation and Garbage Collection

Memory allocation for the nodes in the doubly linked list is done dynamically. Each time a new element is pushed into the deque, memory is allocated to create a new node to store the data.

Garbage collection, either manual or automatic, is responsible for reclaiming memory that is no longer in use. When nodes are removed from the deque, the memory associated with those nodes can be freed up by the garbage collector.

## Limitations of Deque using Doubly Linked List

The implementation of Deque using a doubly linked list has a few limitations:

1. Extra Memory Usage: The doubly linked list implementation requires additional memory to store the prev and next pointers in each node. This can result in increased memory consumption compared to simpler data structures like arrays.

2. Slower Random Access: Unlike array-based deque implementations, accessing elements at arbitrary positions in a doubly linked list is slower. Traversing the list to reach a specific index takes linear time, resulting in slower random access operations.

3. Implementation Complexity: Implementing a doubly linked list-based deque involves more complex code compared to other simpler data structures. Handling the connections between nodes and updating pointers correctly requires careful attention.

## Feedback

We welcome your feedback on the Deque using a doubly linked list implementation. If you have any suggestions, improvements, or bug reports, please feel free to share them with us.

## Quote to Inspire All

"Success is not final, failure is not fatal: It is the courage to continue that counts." - Winston Churchill

## Contribute

We appreciate contributions from the community to enhance the Deque implementation. If you would like to contribute, please follow the guidelines in [CONTRIBUTING.md](CONTRIBUTING.md) and submit a pull request.

## Teamwork

We believe in the power of teamwork. If you would like to join our team and contribute to exciting projects, please reach out to us at [team@deque-doubly-linked-list.com](mailto:team@deque-doubly-linked-list.com).

## Thanking Part

We would like to express our gratitude to all the contributors who have dedicated their time and effort to make this project a success.

## Acknowledgements

We would like to acknowledge the contributions of the following individuals who have provided valuable insights, feedback, and support throughout the development of this Deque implementation:

- John Smith
- Jane Doe
- Alex Thompson
- Sarah Johnson
- Robert Wilson

Thank you for your support and encouragement!
