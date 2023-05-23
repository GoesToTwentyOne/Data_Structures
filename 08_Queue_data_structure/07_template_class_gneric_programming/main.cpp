#include <iostream>
using namespace std;
const int max_size = 500;
template <class T>
class Queue {
public:
    T q[max_size];
    int l, r, size;

    Queue() {
        l = 0;
        r = -1;
        size = 0;
    }

    void enqueue(T value) {
        // check if queue is full
        if (size == max_size) {
            cout << "Queue is full" << endl;
            return;
        }

        r++;
        // check if crossed the border
        if (r == max_size)
            r = 0;

        q[r] = value;
        size++;
    }

    T front() {
        if (size == 0) {
            cout << "Your queue is empty" << endl;
            return T();
        }

        return q[l];
    }

    void dequeue() {
        if (size == 0) {
            cout << "Your queue is empty" << endl;
            return;
        }

        l++;
        // check if crossed the border
        if (l == max_size)
            l = 0;

        size--;
    }

    int getSize() {
        return size;
    }
};

int main() {
    Queue<int> q;
    cout << "Size of queue: " << q.getSize() << endl;
    q.enqueue(5);
    cout << "Size of queue: " << q.getSize() << endl;
    q.enqueue(6);
    cout << "Size of queue: " << q.getSize() << endl;
    q.enqueue(7);
    cout << "Size of queue: " << q.getSize() << endl;
    cout << "Front element of queue: " << q.front() << endl;
    q.dequeue();
    cout << "Size of queue: " << q.getSize() << endl;

    return 0;
}
