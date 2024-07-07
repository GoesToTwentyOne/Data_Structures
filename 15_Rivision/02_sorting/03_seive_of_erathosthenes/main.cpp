#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int *prime = new int[n]();
    int *visited = new int[n]();
    for (int i = 2; i < n; i++)
    {
        if (!visited[i])
        {
            prime[i] = i;
            for (int j = 2; j * i < n; j++)
            {
                visited[j * i] = 1;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << prime[i] << " ";
    }
}