Certainly! Here's the README.md file for a queue using a static array:

# Queue using Static Array

## Introduction
A queue is a linear data structure that follows the FIFO (First-In-First-Out) principle. It is an ordered collection of elements in which an element is added at one end (rear) and removed from the other end (front). In this implementation, a static array is used to store the elements of the queue.

## Table of Contents
- [Simulation with Example](#simulation-with-example)
- [Why You Should Learn It?](#why-you-should-learn-it)
- [Real-Life Example](#real-life-example)
- [How It Works](#how-it-works)
- [Complexity Analysis](#complexity-analysis)
- [Advantages and Disadvantages](#advantages-and-disadvantages)
- [Algorithm](#algorithm)
- [Sudo Code](#sudo-code)
- [Memory Representation with Calculation](#memory-representation-with-calculation)
- [Memory Allocation](#memory-allocation)
- [Garbage Collection](#garbage-collection)
- [Limitation of Queue using Static Array](#limitation-of-queue-using-static-array)
- [Feedback](#feedback)
- [Quote to Inspire](#quote-to-inspire)
- [Contribute](#contribute)
- [Team Work](#team-work)
- [Thanking Part](#thanking-part)
- [Acknowledgements](#acknowledgements)

## Simulation with Example
Let's consider an example of a queue that represents a line of people waiting to buy tickets:
```
Front [Person 1, Person 2, Person 3, Person 4] Rear
```
In this example, people join the queue at the rear (end of the array) and are served from the front (beginning of the array). The queue maintains the order in which people arrive, and the first person to join the queue is the first person to be served.

To better understand how a queue using a static array works, let's consider an example:

```
// Create a queue of capacity 5
Queue q = new Queue(5);

// Enqueue elements
q.enqueue(10);
q.enqueue(20);
q.enqueue(30);
q.enqueue(40);

// Dequeue elements
q.dequeue();
q.dequeue();

// Front and rear elements
q.front();   // Output: 30
q.rear();    // Output: 40
```

```cpp
#include<bits/stdc++.h>
using namespace std;
const int max_size=500;
class Queue{
public:
  int q[max_size];
  int l,r;
  Queue(){
    l=0;
    r=-1;
  }
  void enqueue(int value){
    if(r+1>=max_size){
      cout<<"Queue is full"<<'\n';
    }
    r++;
    q[r]=value;
  }
  int front(){
    if(l>r){
      cout<<"Your queue is empty"<<'\n';
    }
    return q[l];
  }
  void dequeue(){
    if(l>r){
      cout<<"Your queue is empty"<<'\n';
    }
    l++;
  }
  int size(){
    return r-l+1;
  }
};

int main(){
  Queue q;
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(5);
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(6);
  cout<<"Size of queue: "<<q.size()<<'\n';
  q.enqueue(7);
  cout<<"Size of queue: "<<q.size()<<'\n';
  cout<<"Front element of queue: "<<q.front()<<'\n';
  q.dequeue();
  cout<<"Size of queue: "<<q.size()<<'\n';
}
```

## Why You Should Learn It?
Learning about a queue using a static array is important because it helps you understand fundamental concepts of data structures and their implementations. Queues are widely used in real-life scenarios, and having knowledge of this implementation will enable you to solve problems efficiently.

## Real-Life Example
A real-life example of a queue can be seen in a ticket counter at a movie theater. People stand in a queue and get their tickets in the order they arrived. The first person to arrive gets their ticket first, and so on. This follows the FIFO principle of a queue.

## How It Works
In a queue using a static array, elements are stored in a fixed-size array. The front and rear indices keep track of the positions of the elements in the queue. When an element is enqueued, it is added to the rear of the queue, and when an element is dequeued, it is removed from the front of the queue. The front and rear indices are updated accordingly.

## Complexity Analysis
The time complexity of the queue operations using a static array is as follows:
- Enqueue: O(1)
- Dequeue: O(1)
- Front: O(1)
- Rear: O(1)

## Advantages and Disadvantages
Advantages of a queue using a static array:
- Simple implementation
- Efficient enqueue and dequeue operations (constant time complexity)

Disadvantages of a queue using a static array:
- Fixed size limits the number of elements that can be stored
- Wasted memory if the queue is not fully utilized

## Algorithm
The algorithm for a queue using a static array is as follows:
- Create a static array of fixed size to store the elements.
- Initialize the front and

 rear indices to -1.
- Enqueue operation:
  - Check if the queue is full.
  - If not, increment the rear index and add the element to the array.
- Dequeue operation:
  - Check if the queue is empty.
  - If not, increment the front index and remove the element from the array.
- Front operation:
  - Return the element at the front index.
- Rear operation:
  - Return the element at the rear index.

## Sudo Code
```
class Queue {
  int q[max_size]
  int l, r

  Queue():
    l = 0
    r = -1

  enqueue(value):
    if r + 1 >= max_size:
      print "Queue is full"
    r++
    q[r] = value

  front():
    if l > r:
      print "Your queue is empty"
    return q[l]

  dequeue():
    if l > r:
      print "Your queue is empty"
    l++

  size():
    return r - l + 1
}
```


## Memory Representation with Calculation
The memory representation of a queue using a static array depends on the capacity of the queue. Each element in the array occupies a certain amount of memory, and additional memory is required for the front and rear indices.

For example, if the capacity of the queue is 5 and each element occupies 4 bytes, the memory calculation is as follows:
- Memory for the static array: 5 elements * 4 bytes = 20 bytes
- Memory for the front index: 1 index * 4 bytes = 4 bytes
- Memory for the rear index: 1 index * 4 bytes = 4 bytes
- Total memory: 20 bytes + 4 bytes + 4 bytes = 28 bytes
```
Index: 0   1   2   3   ...   r
Queue: [   |   |   |   |   ...  ]
```

## Memory Allocation
Memory allocation for a queue using a static array is done during the initialization of the queue. A static array of the specified capacity is allocated in memory, and the front and rear indices are initialized.

## Garbage Collection
Garbage collection is not applicable in the context of a queue using a static array. Since the size of the array is fixed and known at compile time, there is no need for dynamic memory allocation or garbage collection.

## Limitation of Queue using Static Array
The main limitation of a queue using a static array is its fixed size. Once the array is fully occupied, it cannot accommodate any more elements. This can lead to inefficiency if the queue needs to grow dynamically.

## Feedback
We welcome any feedback, suggestions, or bug reports for the queue using a static array implementation. Please feel free to open an issue or submit a pull request with your contributions.

## Quote to Inspire
> "Coming together is a beginning. Keeping together is progress. Working together is success." - Henry Ford

## Contribute
We encourage contributions to enhance the queue using a static array implementation. If you'd like to contribute, please follow the guidelines outlined in the [CONTRIBUTING.md](CONTRIBUTING.md) file.

## Team Work
This project is the result of collaborative teamwork, with each member contributing their expertise and insights to create

 a robust and efficient queue using a static array implementation.

## Thanking Part
Thank you for taking the time to explore the queue using a static array implementation. We hope you find it useful and informative.

## Acknowledgements
We would like to express our gratitude to all the contributors and developers who have contributed to the queue using a static array implementation. Your efforts and dedication are greatly appreciated.

Thank you!
