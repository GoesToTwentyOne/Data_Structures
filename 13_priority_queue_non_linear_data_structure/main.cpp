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
