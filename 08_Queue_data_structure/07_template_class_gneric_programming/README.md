# Queue using Circular Array (Template Class)

This repository contains the implementation of a queue using a circular array template class in C++.

## Introduction
A queue is a fundamental data structure that follows the First-In-First-Out (FIFO) principle. It allows elements to be inserted at the rear and removed from the front. This repository provides an implementation of a queue using a circular array template class in C++. The circular array allows efficient memory utilization and avoids the limitation of fixed-size arrays.

## Table of Contents
- [Introduction](#introduction)
- [Simulation with Example](#simulation-with-example)
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
- [Limitations of Queue Using Circular Array (Template Class)](#limitations-of-queue-using-circular-array-template-class)
- [Feedback](#feedback)
- [Quote to Inspire All](#quote-to-inspire-all)
- [Contribute](#contribute)
- [Teamwork](#teamwork)
- [Thanking Part](#thanking-part)
- [Acknowledgements](#acknowledgements)

## Simulation with Example
To better understand the implementation and operations of the queue using a circular array template class, let's consider an example:

```cpp
// Create a queue with a capacity of 5
Queue<int> q(5);

// Enqueue elements
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);

// Dequeue an element
q.dequeue();

// Get the front element
int frontElement = q.getFront();
```

## Why You Should Learn It?
Learning about the queue data structure and its implementation using a circular array template class is beneficial for the following reasons:
- Queues are commonly used in various applications and algorithms.
- Understanding queues helps in solving real-life problems efficiently.
- Implementing a queue using a circular array template class allows for flexible storage of elements of any data type.
- Circular arrays enable efficient memory utilization and avoid the limitations of fixed-size arrays.

## Real-life Example
A real-life example of using a queue with a circular array template class can be seen in a printer spooler system. When multiple users send print jobs to a printer, the printer spooler manages the print jobs in a queue. The circular array template class implementation ensures that the print jobs are processed in the order they were received, and it efficiently manages the available memory.

## How It Works
The queue using a circular array template class maintains two pointers, `front` and `rear`, which indicate the positions of the front and rear elements of the queue, respectively. Initially, both pointers are set to -1 to represent an empty queue. When an element is enqueued, the `rear` pointer is incremented, and the element is added to the position pointed by `rear`. If the `rear` pointer exceeds the array's capacity, it wraps around to the beginning of the array, creating a circular behavior. When an element is dequeued, the `front` pointer is incremented, and the element at the `front` position is removed. If the `front` pointer exceeds the array's capacity, it also wraps around to the beginning. This circular

 behavior allows efficient space utilization and ensures that the queue is treated as a circular structure.

## Complexity Analysis
The time complexity for the operations of the queue using a circular array template class is as follows:
- Enqueue: O(1) amortized time complexity.
- Dequeue: O(1) amortized time complexity.
- Get Front: O(1).
- Get Size: O(1).

## Advantages and Disadvantages
Advantages of using a queue with a circular array template class:
- Efficient memory utilization.
- Constant time complexity for enqueue, dequeue, front, and size operations.
- Flexibility to store elements of any data type using templates.

Disadvantages of using a queue with a circular array template class:
- Limited maximum size due to the fixed-size array.
- Potentially wasted memory space if the array size is much larger than the number of elements in the queue.
- Difficulty in dynamically resizing the circular array.

## Algorithm
The algorithm for implementing a queue using a circular array template class is similar to the one explained in the previous section.

## Pseudocode
The pseudocode for the queue using a circular array template class is as follows:

```cpp
template <typename T>
class Queue {
    T* q;
    int front;
    int rear;
    int capacity;
    int size;

public:
    Queue(int capacity) {
        this->capacity = capacity;
        q = new T[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    void enqueue(T value) {
        if (size == capacity) {
            cout << "Queue is full" << endl;
            return;
        }

        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }

        front = (front + 1) % capacity;
        size--;
    }

    T getFront() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return T();
        }

        return q[(front + 1) % capacity];
    }

    int getSize() {
        return size;
    }
};
```

## Memory Representation with Calculation
To be added.

## Memory Allocation
To be added.

## Garbage Collection
To be added.

## Limitations of Queue Using Circular Array (Template Class)
The limitations of using a queue with a circular array template class include:
- Limited maximum size due to the fixed-size array.
- Wasted memory space if the array size is much larger than the number of elements in the queue.
- Difficulty in dynamically resizing the circular array.
- More complex code compared to using dynamic arrays or linked lists.

## Feedback
We welcome any feedback or suggestions for improvement. Feel free to open an issue or submit a pull request.

## Quote to Inspire All
"The only way to do great work is to love what you do." - Steve Jobs

## Contribute
Contributions are always welcome! If you have any ideas, improvements, or bug fixes, please submit a pull request.

## Teamwork
We believe in the power of teamwork. If you'd like to contribute to this project or join our team, please reach out to us.

## Thanking Part
We would like to express our gratitude to all the contributors and supporters who have helped in the development of this project.

## Acknowledgements
We would like to acknowledge the following resources and references that have been helpful in creating this project:
- [Resource 1]
- [Resource 2]
- [Resource 3]
