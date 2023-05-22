# Dynamic Array Stack

This repository contains an implementation of a stack data structure using a dynamic array. The stack follows the Last-In-First-Out (LIFO) principle, allowing efficient insertion and removal of elements at one end, known as the "top" of the stack.

## Table of Contents
1. [Introduction](#introduction)
2. [Example](#example)
3. [Real-life Example](#real-life-example)
4. [How It Works](#how-it-works)
5. [Complexity Analysis](#complexity-analysis)
6. [Advantages and Disadvantages](#advantages-and-disadvantages)
7. [Algorithm and Pseudocode](#algorithm-and-pseudocode)
8. [Memory Representation and Allocation](#memory-representation-and-allocation)
9. [Garbage Collection](#garbage-collection)
10. [Limitations of Stack using Dynamic Array](#limitations-of-stack-using-dynamic-array)
11. [Feedback](#feedback)
12. [Quote to Inspire](#quote-to-inspire)
13. [Contribute](#contribute)
14. [Team Work](#team-work)
15. [Acknowledgements](#acknowledgements)

## Introduction

The dynamic array stack was created to address the need for a stack that can resize and adapt to accommodate a variable number of elements. By utilizing a dynamic array, the stack can grow or shrink as required, allowing for flexibility and efficient memory usage.

## Example

To illustrate the usage of the dynamic array stack, consider the following Python example:

```python
# Create an empty stack
stack = DynamicArrayStack()

# Push elements onto the stack
stack.push(10)
stack.push(20)
stack.push(30)
stack.push(40)

# Pop elements from the stack
element = stack.pop()  # element = 40
element = stack.pop()  # element = 30

# Get the top element without removing it
top_element = stack.top()  # top_element = 20

# Check if the stack is empty
is_empty = stack.is_empty()  # is_empty = False
```

## Real-life Example

A real-life example of a dynamic array stack implementation is the undo functionality in text editors or word processors. When performing actions such as typing or deleting characters, the editor pushes the changes onto the stack. To undo the last action, the editor pops the changes from the stack, reverting the document to its previous state.

## How It Works

The dynamic array stack utilizes a resizable array to store elements. Initially, the stack is empty, and the underlying array is allocated with a small capacity. As elements are pushed onto the stack, they are inserted at the top position within the array. When the array becomes full, a new array with an increased capacity is allocated, and all elements are copied to the new array. This process ensures the stack can accommodate a growing number of elements.

When elements are popped from the stack, the top element is removed from the array, and the array's size is decreased accordingly. If the number of elements in the array becomes significantly smaller than its capacity, a new array with reduced capacity can be allocated to conserve memory.

## Complexity Analysis

The dynamic array stack has the following time complexities for various operations:

- Push: O(1) amortized time complexity
- Pop: O(1) time complexity
- Top: O(1) time complexity
- Is Empty: O(1) time complexity

The amortized time complexity of O(1) for the push operation is achieved by dynamically resizing the array when necessary.

## Advantages and Disadvantages

Advantages of the dynamic array stack implementation:

- Dynamic resizing allows efficient memory usage and accommod

ates a varying number of elements.
- Provides constant time complexity for push, pop, top, and is_empty operations.
- Simple implementation and easy to understand.

Disadvantages of the dynamic array stack implementation:

- Dynamic resizing may involve memory allocation and copying, potentially resulting in performance overhead.
- Managing the stack's capacity is crucial to avoid excessive memory consumption.

## Algorithm and Pseudocode

The algorithm for the dynamic array stack can be summarized as follows:

1. Initialize an empty stack with a dynamically allocated array.
2. Implement the push operation:
   - Check if the array is full. If so, resize the array to increase its capacity.
   - Insert the element at the top of the stack.
3. Implement the pop operation:
   - Check if the stack is empty. If so, throw an error or return a specific value.
   - Remove the top element from the array and decrease the stack size.
4. Implement the top operation:
   - Check if the stack is empty. If so, throw an error or return a specific value.
   - Return the top element from the array without modifying the stack.
5. Implement the is_empty operation:
   - Check if the stack size is zero. Return true if it is, false otherwise.

## Memory Representation and Allocation

The memory representation of the dynamic array stack consists of two main components: the stack object and the dynamically allocated array.

The stack object typically contains information such as the size of the stack, the current capacity of the underlying array, and a reference to the array itself.

Memory allocation occurs during the initialization of the stack, where an initial array of a certain capacity is allocated. As elements are pushed onto the stack and the array reaches its capacity, a new array with increased capacity is allocated, and the existing elements are copied over. Similarly, if the number of elements becomes significantly smaller than the array's capacity, a new array with reduced capacity can be allocated to conserve memory.

## Garbage Collection

In languages with automatic garbage collection, such as Python or Java, the memory management of the dynamic array stack is typically handled by the garbage collector. When elements are no longer reachable or in use, the garbage collector identifies and reclaims the memory occupied by those elements, ensuring efficient memory usage.

## Limitations of Stack using Dynamic Array

Some limitations of the stack implemented with a dynamic array include:

- The stack's maximum capacity is determined by the available memory of the system.
- Resizing the array can incur performance overhead, particularly when the stack is large and requires frequent resizing.

## Feedback

We welcome any feedback, suggestions, or bug reports for the dynamic array stack implementation. Please feel free to open an issue or submit a pull request with your contributions.

## Quote to Inspire

> "Coming together is a beginning. Keeping together is progress. Working together is success." - Henry Ford

## Contribute

We encourage contributions to enhance the dynamic array stack implementation. If you'd like to contribute, please follow the guidelines outlined in the [CONTRIBUTING.md](CONTRIBUTING.md) file.

## Team Work

This project is the result of collaborative teamwork, with each member contributing their expertise and insights to create a robust and efficient dynamic array stack implementation.

## Acknowledgements

We would like to express our gratitude to all the contributors and developers who have contributed to the stack using a dynamic array implementation. Your efforts and dedication are greatly appreciated.

Thank you!
