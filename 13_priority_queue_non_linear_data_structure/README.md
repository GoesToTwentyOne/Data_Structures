## Theory: Priority Queue (Non-Linear Data Structure)

### Introduction
A Priority Queue is an abstract data type similar to a regular queue or stack data structure in which each element has a "priority" associated with it. In a priority queue, an element with high priority is served before an element with low priority. If two elements have the same priority, they are served according to their order in the queue.

### Characteristics
- **Non-linear Structure**: Unlike stacks and regular queues that follow linear ordering, priority queues are often implemented using non-linear structures such as heaps or binary search trees to efficiently manage the order of elements based on priority.
- **Dynamic Order**: The order of elements is dynamic and changes as elements are added or removed.
- **Two Main Operations**:
  - **Insertion**: Adding an element to the queue.
  - **Deletion**: Removing the element with the highest priority.

### Types of Priority Queues
1. **Min-Priority Queue**: The element with the smallest priority is removed first.
2. **Max-Priority Queue**: The element with the highest priority is removed first.

### Implementations
- **Heap**: The most common implementation. A binary heap (either min-heap or max-heap) provides an efficient way to implement priority queues with O(log n) time complexity for insertion and deletion.
- **Binary Search Tree (BST)**: Can be used but usually less efficient compared to heaps for priority queues.
- **Unordered List**: Simple but inefficient as insertion takes O(1) time, but deletion takes O(n) time.
- **Ordered List**: More efficient for deletion (O(1)), but insertion takes O(n) time.

### Applications
- **CPU Scheduling**: Processes are scheduled based on priority.
- **Graph Algorithms**: Dijkstra's shortest path, Prim's minimum spanning tree, etc.
- **Event Simulation**: Handling events based on their priority.

## Practical Note: Implementing a Priority Queue using a Min-Heap

### Steps for Implementation
1. **Define the Priority Queue Class**: This class will encapsulate the min-heap and provide methods for insertion, deletion, and other operations.
2. **Heapify Methods**: Methods to maintain the heap property during insertion and deletion.
3. **Insertion Method**: Add an element to the heap and ensure the heap property is maintained.
4. **Deletion Method**: Remove the element with the highest priority (root of the heap) and re-heapify.

### Example Code

```cpp
#include <iostream>
#include <vector>
#include <stdexcept>

class MinHeap {
private:
    std::vector<int> heap;

    int parent(int i) { return (i - 1) / 2; }
    int leftChild(int i) { return 2 * i + 1; }
    int rightChild(int i) { return 2 * i + 2; }

    void heapifyUp(int index) {
        while (index != 0 && heap[parent(index)] > heap[index]) {
            std::swap(heap[parent(index)], heap[index]);
            index = parent(index);
        }
    }

    void heapifyDown(int index) {
        int smallest = index;
        int left = leftChild(index);
        int right = rightChild(index);

        if (left < heap.size() && heap[left] < heap[smallest])
            smallest = left;

        if (right < heap.size() && heap[right] < heap[smallest])
            smallest = right;

        if (smallest != index) {
            std::swap(heap[smallest], heap[index]);
            heapifyDown(smallest);
        }
    }

public:
    void insert(int key) {
        heap.push_back(key);
        heapifyUp(heap.size() - 1);
    }

    int extractMin() {
        if (heap.empty())
            throw std::out_of_range("Heap is empty");

        int root = heap.front();
        heap.front() = heap.back();
        heap.pop_back();
        if (!heap.empty())
            heapifyDown(0);
        return root;
    }

    int getMin() {
        if (heap.empty())
            throw std::out_of_range("Heap is empty");
        return heap.front();
    }
};

int main() {
    MinHeap pq;
    pq.insert(10);
    pq.insert(5);
    pq.insert(3);
    pq.insert(8);

    std::cout << pq.extractMin() << std::endl;  // Output: 3
    std::cout << pq.extractMin() << std::endl;  // Output: 5
    std::cout << pq.extractMin() << std::endl;  // Output: 8
    std::cout << pq.extractMin() << std::endl;  // Output: 10

    return 0;
}
```

### Explanation
1. **MinHeap Class**: This class encapsulates the heap vector and provides methods to maintain the heap property.
2. **Insert Method**: Adds a new element to the heap and calls `heapifyUp` to maintain the min-heap property.
3. **HeapifyUp Method**: Ensures the newly added element is moved to the correct position.
4. **ExtractMin Method**: Removes and returns the smallest element (root) and calls `heapifyDown` to re-heapify the remaining elements.
5. **HeapifyDown Method**: Ensures the heap property is maintained after removing the root element.
6. **GetMin Method**: Returns the smallest element without removing it.

This implementation provides an efficient way to manage a priority queue with O(log n) complexity for both insertion and deletion, making it suitable for applications that require dynamic priority management.
