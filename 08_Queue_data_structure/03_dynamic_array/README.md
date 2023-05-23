# Queue using Circular Dynamic Array

This repository contains the implementation of a queue using a circular dynamic array in C++.

## Introduction
A queue is a data structure that follows the First-In-First-Out (FIFO) principle. It allows elements to be inserted at the rear and removed from the front. This repository provides an implementation of a queue using a circular dynamic array in C++. The circular dynamic array allows for efficient memory utilization and dynamic resizing of the queue.

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
- [Limitations of Queue Using Circular Dynamic Array](#limitations-of-queue-using-circular-dynamic-array)
- [Feedback](#feedback)
- [Quote to Inspire All](#quote-to-inspire-all)
- [Contribute](#contribute)
- [Teamwork](#teamwork)
- [Thanking Part](#thanking-part)
- [Acknowledgements](#acknowledgements)

## Simulation with Example
To better understand the implementation and operations of the queue using a circular dynamic array, let's consider an example:

```cpp
// Create a queue
Queue<int> q;

// Enqueue elements
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);
q.enqueue(50);

// Dequeue an element
q.dequeue();

// Get the front element
int frontElement = q.front();
```

## Why You Should Learn It?
Learning about the queue data structure and its implementation using a circular dynamic array is beneficial for the following reasons:
- Queues are widely used in various applications and algorithms.
- Understanding queues helps in solving real-life problems efficiently.
- Implementing a queue using a circular dynamic array allows for flexible storage of elements and dynamic resizing of the queue as needed.

## Real-life Example
A real-life example of using a queue with a circular dynamic array can be seen in an operating system's process scheduling algorithm. The ready queue, which holds the processes ready to be executed, can be implemented using a circular dynamic array. The dynamic resizing capability ensures that the queue can handle varying numbers of processes efficiently.

## How It Works
The queue using a circular dynamic array maintains two pointers, `front` and `rear`, which indicate the positions of the front and rear elements of the queue, respectively. Initially, both pointers are set to -1 to represent an empty queue. When an element is enqueued, the `rear` pointer is incremented, and the element is added to the position pointed by `rear`. If the `rear` pointer exceeds the current array size, a new array with a larger capacity is created, and the elements from the old array are copied to the new array. The `front` and `rear` pointers are then updated accordingly. When an element is dequeued, the `front` pointer is incremented, and the element at the `front` position is removed. If the `front` pointer exceeds the current array size, it wraps around to the beginning of the array. This circular behavior allows efficient space utilization and dynamic resizing of the queue.

## Complexity Analysis
The time complexity for

 the operations of the queue using a circular dynamic array is as follows:
- Enqueue: Amortized O(1) time complexity.
- Dequeue: Amortized O(1) time complexity.
- Get Front: O(1).
- Get Size: O(1).

## Advantages and Disadvantages
Advantages of using a queue with a circular dynamic array:
- Efficient memory utilization.
- Constant time complexity for enqueue, dequeue, front, and size operations.
- Dynamic resizing capability to accommodate varying numbers of elements.

Disadvantages of using a queue with a circular dynamic array:
- The resizing process incurs additional time and memory overhead.
- Inserting elements beyond the maximum capacity requires resizing the array.

## Algorithm
The algorithm for implementing a queue using a circular dynamic array is as follows:
1. Initialize the queue with an initial capacity.
2. Maintain two pointers, `front` and `rear`, initially set to -1.
3. When enqueueing an element:
   - Check if the queue is full (rear+1 == front or rear == capacity-1 && front == 0).
   - If full, resize the array to increase its capacity.
   - Increment the rear pointer and add the element at the rear position.
4. When dequeueing an element:
   - Check if the queue is empty (front == -1).
   - If empty, return an error.
   - Increment the front pointer to remove the element.
5. When getting the front element:
   - Check if the queue is empty (front == -1).
   - If empty, return an error.
   - Return the element at the position pointed by (front+1)%capacity.
6. When getting the size of the queue, return the difference between the rear and front pointers.

## Pseudocode
The pseudocode for the queue using a circular dynamic array is as follows:

```cpp
template <typename T>
class Queue {
    T* q;
    int front;
    int rear;
    int capacity;
    int size;

public:
    Queue(int initialCapacity) {
        capacity = initialCapacity;
        q = new T[capacity];
        front = -1;
        rear = -1;
        size = 0;
    }

    void enqueue(T value) {
        if ((rear + 1) % capacity == front) {
            resizeArray();
        }

        rear = (rear + 1) % capacity;
        q[rear] = value;
        size++;
    }

    void dequeue() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return;
        }

        if (front == rear) {
            front = -1;
            rear = -1;
        } else {
            front = (front + 1) % capacity;
        }

        size--;
    }

    T frontElement() {
        if (front == -1) {
            cout << "Queue is empty" << endl;
            return T();
        }

        return q[(front + 1) % capacity];
    }

    int getSize() {
        return size;
    }

private:
    void resizeArray() {
        int newCapacity = capacity * 2;
        T* newQ = new T[newCapacity];

        int j = 1;
        for (int i = (front + 1) % capacity; i != (rear + 1) % capacity; i = (i + 1) % capacity) {
            newQ[j] = q[i];
            j++;
        }

        front = 0;
        rear = size - 1;
        capacity = newCapacity;

        delete[] q;
        q = newQ;
    }
};
```

##

 Memory Representation with Calculation
The memory representation of the queue using a circular dynamic array can be visualized as follows:

```
+---+---+---+---+---+---+---+---+---+---+
|   | 1 | 2 | 3 | 4 | 5 | 6 | 7 |   |   |
+---+---+---+---+---+---+---+---+---+---+
               ^           ^
             Front        Rear
```

In this representation, the circular array is shown with indices representing the positions of the elements. The front pointer points to the first element, and the rear pointer points to the last element. The empty positions in the array are denoted by empty spaces.

The calculation for the circular positioning of the front and rear pointers is performed using the modulus operator `%` to ensure the pointers wrap around the array.

## Memory Allocation
The memory allocation for the circular dynamic array is performed dynamically using the `new` operator in C++. The initial capacity is specified during the creation of the queue, and additional memory is allocated when the array needs to be resized.

## Garbage Collection
In C++, the memory allocated using the `new` operator must be freed using the `delete` operator to avoid memory leaks. In the implementation of the circular dynamic array, the old array is deleted and replaced with the resized array when a resize operation is performed.

## Limitations of Queue Using Circular Dynamic Array
- The maximum capacity of the queue is limited by the available memory. As the capacity increases, the memory usage also increases.
- Resizing the array incurs additional time and memory overhead, especially when the queue size is large.
- The circular dynamic array implementation may not be suitable for applications where the size of the queue is highly unpredictable or rapidly changing.

## Feedback
Your feedback is highly appreciated. If you have any suggestions, improvements, or bug reports, please feel free to open an issue or submit a pull request.

## Quote to Inspire All
"The only way to do great work is to love what you do." - Steve Jobs

## Contribute
Contributions are always welcome! If you'd like to contribute to this project, please follow the typical GitHub workflow: fork the repository, make changes, and submit a pull request.

## Teamwork
This project encourages teamwork. If you'd like to collaborate on this project or have any ideas for improvement, please reach out.

## Thanking Part
A big thank you to all the contributors who have helped in the development of this project.

## Acknowledgements
We would like to acknowledge the following resources and references that have been helpful in creating this project:

- [Resource 1]
- [Resource 2]
- [Resource 3]
