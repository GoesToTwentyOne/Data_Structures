#include <bits/stdc++.h>
using namespace std;
vector<int> quick_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;
    int pivot = rand() % (a.size());
    vector<int> b;
    vector<int> c;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == a[pivot])
        {
            continue;
        }
        else if (a[i] < a[pivot])
        {
            b.push_back(a[i]);
        }
        else
        {
            c.push_back(a[i]);
        }
    }
    vector<int> sorted_b = quick_sort(b);
    vector<int> sorted_c = quick_sort(c);
    vector<int> sorted_a;
    for (int i = 0; i < sorted_b.size(); i++)
    {
        sorted_a.push_back(sorted_b[i]);
    }
    sorted_a.push_back(a[pivot]);
    for (int i = 0; i < sorted_c.size(); i++)
    {
        sorted_a.push_back(sorted_c[i]);
    }
    return sorted_a;
}
int main()
{
    vector<int> arr = {5, 2, 8, 1, 9, 3, 6, 4, 7};
    vector<int> sorted_arr = quick_sort(arr);
    for (int i = 0; i < sorted_arr.size(); i++)
    {
        cout << sorted_arr[i] << " ";
    }
    return 0;
}