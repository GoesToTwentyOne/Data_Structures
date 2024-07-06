#include <bits/stdc++.h>
using namespace std;

class ArrayAll
{
private:
    int *arr;
    int size;
    int capacity;

    void arrayIncrease()
    {
        capacity = capacity * 2;
        int *temp = new int[capacity];
        for (int i = 0; i < size; i++)
        {
            temp[i] = arr[i];
        }
        delete[] arr;
        arr = temp;
    }

public:
    ArrayAll()
    {
        arr = new int[1];
        size = 0;
        capacity = 1;
    }

    void arrayFirstInsert(int value)
    {
        if (size == capacity)
        {
            arrayIncrease();
        }
        for (int i = size - 1; i >= 0; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[0] = value;
        size++;
    }

    void arrayPrint()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    ArrayAll a;
    a.arrayFirstInsert(10);
    a.arrayFirstInsert(20);
    a.arrayFirstInsert(30);
    a.arrayPrint();
    return 0;
}
