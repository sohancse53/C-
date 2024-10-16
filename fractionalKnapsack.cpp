#include <iostream>
using namespace std;

int main()
{
    int w[] = {5, 10, 15, 22, 25};
    int p[] = {30, 40, 45, 77, 90};
    int capacity = 60;
    float r[sizeof(p)];
    int n = sizeof(p) / sizeof(p[0]);
    // ratio calculating
    for (int i = 0; i < n; i++)
    {
        r[i] = (float)p[i] / w[i];
    }
    // sorting
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (r[i] < r[j])
            {
                swap(r[i], r[j]);
                swap(p[i], p[j]);
                swap(w[i], w[j]);
            }
        }
    }

    float maxprft = 0;
    for (int i = 0; i < n; i++)
    {
        if (w[i] < capacity)
        {
            maxprft += p[i];
            capacity -= w[i];
        }
        else
        {
            maxprft += r[i] * capacity;
            capacity = 0;
        }
    }
    cout << maxprft << "$ is the max profit";
    return 0;
}