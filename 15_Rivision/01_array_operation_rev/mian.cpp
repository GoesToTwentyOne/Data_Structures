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
    void arrayDecrease()
    {
        capacity = capacity / 2;
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
    void arrayPos(int pos, int value)
    {
        if (size == capacity)
        {
            arrayIncrease();
        }
        for (int i = size - 1; i >= pos; i--)
        {
            arr[i + 1] = arr[i];
        }
        arr[pos] = value;
        size++;
    }
    void arrayDelFir()
    {
        if (size == capacity / 2)
        {
            arrayDecrease();
        }
        for (int i = 0; i < size; i++)
        {
            arr[i] = arr[i + 1];
        }
        size--;
    }
    void arrayDelPos(int pos)
    {
        if (size == capacity / 2)
        {
            arrayDecrease();
        }
        for (int i = pos + 1; i >= pos; i--)
        {
            arr[i - 1] = arr[1];
        }
        size--;
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
    a.arrayPos(2, 77777);
    a.arrayPrint();
    a.arrayDelFir();
    a.arrayPrint();
    a.arrayDelPos(2);
    a.arrayPrint();
    return 0;
}
