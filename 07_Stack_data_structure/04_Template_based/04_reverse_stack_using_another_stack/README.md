# Reverse Stack using Another Stack

This repository contains the implementation of reversing a stack using another stack in C++. The stack is implemented using a doubly linked list and supports operations such as push, pop, top, and size.

## Table of Contents

- [Introduction](#introduction)
- [Example and Visualization](#example-and-visualization)
- [Why You Should Learn It](#why-you-should-learn-it)
- [Real-Life Example](#real-life-example)
- [How It Works](#how-it-works)
- [Complexity Analysis](#complexity-analysis)
- [Advantages and Disadvantages](#advantages-and-disadvantages)
- [Algorithm](#algorithm)
- [Pseudocode](#pseudocode)
- [Memory Representation with Calculation](#memory-representation-with-calculation)
- [Memory Allocation](#memory-allocation)
- [Garbage Collection](#garbage-collection)
- [Limitations](#limitations)
- [Feedback](#feedback)
- [Quote to Inspire](#quote-to-inspire)
- [Contribute](#contribute)
- [Team Work](#team-work)
- [Acknowledgements](#acknowledgements)

## Introduction

The implementation provides a way to reverse a stack using an auxiliary stack. Reversing the stack changes the order of elements from Last-In-First-Out (LIFO) to First-In-First-Out (FIFO).

The stack is implemented using a doubly linked list data structure, which allows efficient insertion and deletion operations at the top of the stack. The auxiliary stack is used to temporarily store elements during the reversal process.

## Example and Visualization

Let's consider an example to understand the reversal of a stack using another stack.

```cpp
STACK<int> st;
st.push(2);
st.push(3);
st.push(4);
st.push(5);
```

Initially, the stack contains elements [5, 4, 3, 2]. The visualization of the stack is as follows:

```
Top -> 5 -> 4 -> 3 -> 2 -> Bottom
```

To reverse the stack, we use an auxiliary stack and transfer the elements from the original stack to the auxiliary stack.

```cpp
STACK<int> temp;
while (st.getSize() > 0) {
  temp.push(st.top());
  st.pop();
}
```

After transferring the elements, the original stack becomes empty, and the auxiliary stack contains the reversed order of elements. The visualization of the auxiliary stack is as follows:

```
Top -> 2 -> 3 -> 4 -> 5 -> Bottom
```

Finally, we swap the original stack with the auxiliary stack to obtain the reversed stack.

```cpp
swap(st, temp);
```

Now, the stack `st` contains the reversed order of elements. The visualization of the reversed stack is as follows:

```
Top -> 5 -> 4 -> 3 -> 2 -> Bottom
```

## Why You Should Learn It

Understanding and implementing stack reversal using another stack is beneficial for the following reasons:

1. **Reordering Elements**: Reversing a stack allows you to change the order of elements from LIFO to FIFO or vice versa, which can be useful in various scenarios.

2. **Algorithmic Problem Solving**: Reversing a stack is a fundamental operation used in algorithmic problem-solving, such as palindrome checking, expression evaluation, and syntax parsing.

3. **Understanding Stack Operations**: Implementing stack reversal helps you grasp the underlying concepts of stack operations like push, pop, and top.

4. **Enhancing Problem-Solving Skills**: Learning stack reversal expands your problem-solving skills by providing a different perspective on manipulating data structures.

## Real-Life Example



Consider a scenario where you have a stack of plates stacked on top of each other. The plates are placed in a Last-In-First-Out (LIFO) order. However, you want to serve the plates in a First-In-First-Out (FIFO) order.

By reversing the stack, you can achieve the desired order. You transfer the plates to another stack in the reversed order, and then you can serve the plates from the new stack, ensuring the First-In-First-Out order.

## How It Works

The process of reversing a stack using another stack involves the following steps:

1. Create an auxiliary stack.

2. Transfer the elements from the original stack to the auxiliary stack one by one while emptying the original stack.

3. After transferring all the elements, the original stack becomes empty, and the auxiliary stack contains the elements in the reversed order.

4. Swap the original stack with the auxiliary stack to obtain the reversed stack.

## Complexity Analysis

The time complexity of reversing a stack using another stack is O(n), where n is the number of elements in the original stack. This is because each element is pushed and popped once.

The space complexity is O(n) as well, as an auxiliary stack is used to store the elements temporarily during the reversal process.

## Advantages and Disadvantages

Advantages of reversing a stack using another stack:

- Allows changing the order of elements from LIFO to FIFO or vice versa.
- Helps understand and reinforce the concepts of stack operations.
- Essential for solving various algorithmic problems.

Disadvantages:

- Requires additional space for the auxiliary stack, doubling the memory usage temporarily.

## Algorithm

1. Create an auxiliary stack, `temp`, to store the elements temporarily.

2. While the original stack, `st`, is not empty:
   - Push the top element of `st` onto `temp`.
   - Pop the top element from `st`.

3. Swap the original stack, `st`, with the auxiliary stack, `temp`.

## Pseudocode

```cpp
STACK<int> st;         // Original stack
STACK<int> temp;       // Auxiliary stack

// Transfer elements from original stack to auxiliary stack
while (st.getSize() > 0) {
  temp.push(st.top());
  st.pop();
}

// Swap original stack with auxiliary stack
swap(st, temp);
```

## Memory Representation with Calculation

The memory representation of the stack reversal process involves two stacks: the original stack and the auxiliary stack.

Assuming the original stack has n elements, the memory usage can be calculated as follows:

- Original Stack (`st`): O(n) space
- Auxiliary Stack (`temp`): O(n) space

The total space complexity of the reversal process is O(n).

## Memory Allocation

The memory allocation for the stack reversal process is dynamic and depends on the number of elements in the original stack.

Each element in the stack is represented by a node in the doubly linked list, which requires memory allocation. The nodes are dynamically allocated and deallocated as elements are pushed and popped from the stack.

## Garbage Collection

Garbage collection is required to reclaim the memory occupied by the nodes that are no longer in use. When an element is popped from the stack, the corresponding node is deallocated, freeing up the memory.

C++ handles deallocation of dynamically allocated memory using destructors or explicit `delete` statements. When a node is deleted using the `delete` operator, the memory associated with that node is released.

## Limitations

Reversing a stack using another stack is an efficient and commonly used approach. However, it has a limitation in terms of space complexity. The process requires an auxiliary stack, which temporarily doubles the memory usage.

If memory usage is a critical constraint, alternative approaches

 may be considered, such as using recursion or iteration with arrays instead of stacks. These approaches can achieve the stack reversal with reduced space complexity, but they may have other trade-offs.

## Feedback

If you have any feedback or suggestions regarding the code implementation or the README file, please feel free to provide your input. Your feedback is valuable in improving the quality of the code and the clarity of the explanation.

## Quote to Inspire

> "The more that you read, the more things you will know. The more that you learn, the more places you'll go." - Dr. Seuss

## Contribute

Contributions are always welcome! If you find any issues with the code or have suggestions for improvements, please feel free to contribute. Fork this repository, make your changes, and submit a pull request.

## Team Work

This code implementation and README file were prepared by a single individual as a demonstration. However, teamwork and collaboration are essential aspects of software development. In real-world scenarios, code and documentation are often developed by teams of developers working together to achieve a common goal.

## Acknowledgements

I would like to acknowledge the developers and contributors of the C++ programming language, as well as the STL (Standard Template Library), for providing the necessary tools and libraries to implement stack and doubly linked list data structures. Their efforts have made it possible to create efficient and reliable code.
