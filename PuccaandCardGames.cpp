#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int p = 0, g = 0, i = 0, j = n - 1, f = 0;
    while (i <= j)
    {
        if (f == 0)
        {
            if (a[i] >= a[j])
            {
                p += a[i];
                i++;
            }
            else
            {
                p += a[j];
                j--;
            }
            f = 1;
        }
        else
        {
            if (a[i] >= a[j])
            {
                g += a[i];
                i++;
            }
            else
            {
                g += a[j];
                j--;
            }
            f = 0;
        }
    }
    if (p >= g)
        printf("Pucca");
    else
        printf("Garu");
    return 0;
}