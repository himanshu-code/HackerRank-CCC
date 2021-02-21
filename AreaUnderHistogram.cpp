#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d", &n);
    long int a[n];
    for (int i = 0; i < n; i++)
        scanf("%ld", &a[i]);

    stack<int> s;

    long area = 0, max = 0;
    int i = 0;

    while (i < n)
    {

        if (s.empty() || a[s.top()] < a[i])
            s.push(i++);

        else
        {
            int x = s.top();
            s.pop();
            area = a[x] * (s.empty() ? i : (i - s.top() - 1));
            if (area > max)
                max = area;
        }
    }
    while (s.empty() != true)
    {
        int x = s.top();
        s.pop();
        area = a[x] * (s.empty() ? i : (i - s.top() - 1));
        if (area > max)
            max = area;
    }
    cout << max;
    return 0;
}