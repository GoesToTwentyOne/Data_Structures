#include <bits/stdc++.h>
using namespace std;

vector<int> merge_sort(vector<int> a)
{
    if (a.size() <= 1)
        return a;
    int mid = a.size() / 2;
    vector<int> left = merge_sort(vector<int>(a.begin(), a.begin() + mid));
    vector<int> right = merge_sort(vector<int>(a.begin() + mid, a.end()));
    int index1 = 0;
    int index2 = 0;
    vector<int> sorted_a;
    for (int i = 0; i < a.size(); i++)
    {
        if (index1 == left.size())
        {
            sorted_a.push_back(right[index2]);
            index2++;
        }
        else if (index2 == right.size())
        {
            sorted_a.push_back(left[index1]);
            index1++;
        }
        else if (left[index1] < right[index2])
        {
            sorted_a.push_back(left[index1]);
            index1++;
        }
        else
        {
            sorted_a.push_back(right[index2]);
            index2++;
        }
    }
    return sorted_a;
}

int main()
{
    vector<int> a = {5, 2, 8, 1, 3, 7, 4, 6};
    vector<int> sorted_a = merge_sort(a);
    for (int i : sorted_a)
        cout << i << " ";
    return 0;
}
