#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    long a[n + 1], x;
    a[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%ld", &x);
        a[i] = a[i - 1] + x;
    }
    int y, z;
    for (int i = 0; i < m; i++)
    {
        scanf("%ld %d %d", &x, &y, &z);
        if (x == 1)
        {
            for (int i = y; i < n; i++)
                a[i] += z;
        }
        else
        {
            long sum = a[z] - a[y - 1];
            printf("%ld\n", sum);
        }
    }
    return 0;
}