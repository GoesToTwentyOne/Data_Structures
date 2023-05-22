# Stack

This repository provides an implementation of a stack data structure. It includes a simulation with examples, a real-life example, an explanation of how it works, complexity analysis for all operations, advantages and disadvantages, algorithm, pseudo code, memory representation with calculations, memory allocation, garbage collection, and limitations of a stack.

## Simulation with Example

A stack is a linear data structure that follows the Last-In-First-Out (LIFO) principle. Here's an example of how a stack operates:

```
Stack: []

Push(5)
Stack: [5]

Push(10)
Stack: [5, 10]

Push(15)
Stack: [5, 10, 15]

Pop()
Stack: [5, 10]

Top()
Output: 10

IsEmpty()
Output: False

Size()
Output: 2
```

## Real-life Example

A real-life example of a stack is the call stack in a programming language. When a function is called, its information is pushed onto the call stack, and when the function returns, the information is popped from the stack.

## How It Works

A stack has the following operations:

- **Push**: Adds an element to the top of the stack.
- **Pop**: Removes and returns the top element from the stack.
- **Top**: Returns the top element without removing it.
- **IsEmpty**: Checks if the stack is empty.
- **Size**: Returns the number of elements in the stack.

The stack can be implemented using an array or a linked list. In this implementation, an array is used. The top of the stack is represented by a variable that keeps track of the index of the last inserted element.

## Complexity Analysis

The complexity analysis for stack operations is as follows:

- **Push**: O(1) - Constant time complexity.
- **Pop**: O(1) - Constant time complexity.
- **Top**: O(1) - Constant time complexity.
- **IsEmpty**: O(1) - Constant time complexity.
- **Size**: O(1) - Constant time complexity.

## Advantage and Disadvantage

Advantages of using a stack:

- Simple and intuitive data structure.
- Constant time complexity for all operations.
- Efficient for managing function calls, recursion, and undo/redo operations.

Disadvantages of using a stack:

- Limited capacity, depending on the underlying implementation.
- No random access to elements. Only the top element can be accessed directly.

## Algorithm

The algorithm for implementing a stack is as follows:

1. Create an empty stack.
2. Perform the desired operations:
   - **Push**: Add the element to the top of the stack.
   - **Pop**: Remove and return the top element from the stack.
   - **Top**: Return the top element without removing it.
   - **IsEmpty**: Check if the stack is empty.
   - **Size**: Return the number of elements in the stack.

## Pseudo Code

Here's the pseudo code for the stack operations:

```
Stack:
  array[]
  top = -1

Push(element):
  top = top + 1
  array[top] = element

Pop():
  element = array[top]
  top = top - 1
  return element

Top():
  return array[top]

IsEmpty():
  return top equals -1

Size():
  return top + 1
```

## Memory Representation with Calculation

The memory representation of a stack depends on the underlying implementation. If an array is used, the memory required depends on the number of elements (`N`) and their data type. Assuming each element requires `M` bytes of memory, the total memory required is `N * M`.

## Memory Allocation

Memory allocation for a stack depends on the underlying implementation.

 If an array is used, memory is allocated dynamically during runtime using the `new` operator in languages like C++ or Java.

## Garbage Collection

Garbage collection is relevant for managed languages like Java or C#, where memory deallocation is automatically handled by the runtime environment. In languages like C or C++, manual memory deallocation is required.

## Limitations of Stack

Some limitations of a stack include:

- Limited capacity: Depending on the underlying implementation, a stack may have a maximum capacity. Once the capacity is reached, new elements cannot be added.
- No random access: Access to elements in a stack is restricted to the top element only. Other elements can only be accessed by removing the top elements sequentially.
- Memory management: If a stack is implemented using a dynamically allocated data structure, memory management is the responsibility of the programmer.

---

This README provides an overview of a stack data structure, including its simulation, real-life example, how it works, complexity analysis, advantages, disadvantages, algorithm, pseudo code, memory representation, memory allocation, garbage collection, and limitations.
