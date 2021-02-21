#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[200000], b[200000];
long merge(int a[], int s, int m, int e)
{
    long c = 0;
    int i = s, j = m, k = s;
    while (i < m && j <= e)
    {
        if (a[i] <= a[j])
        {
            b[k++] = a[i++];
        }
        else
        {
            c += (m - i);
            b[k++] = a[j++];
        }
    }
    while (i < m)
        b[k++] = a[i++];
    while (j <= e)
        b[k++] = a[j++];
    for (int i = s; i <= e; i++)
        a[i] = b[i];
    return c;
}
long mergesort(int a[], int s, int e)
{
    long c = 0;
    if (s < e)
    {
        int m = (s + e) / 2;
        c += mergesort(a, s, m);
        c += mergesort(a, m + 1, e);
        c += merge(a, s, m + 1, e);
    }
    return c;
}
int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << mergesort(a, 0, n - 1);
    return 0;
}