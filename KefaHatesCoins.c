#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(int *a, int *b)
{
    return *a - *b;
}
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);
    int a[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    qsort(a, n, sizeof(int), cmp);
    int j = 0, f = 0;
    for (int i = 0; i < m; i++)
    {
        int val, sum = 0, c = 0;
        scanf("%d", &val);
        while (sum < val)
        {
            if (j == n)
            {
                f = 1;
                break;
            }
            sum += a[j];
            c++;
            j++;
        }
        if (f == 0)
            printf("%d %d\n", c, sum);
        else
            printf("-1 -1\n");
    }
    return 0;
}
