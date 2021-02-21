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
    int n;
    scanf("%d", &n);
    int m[n], h[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &m[i]);
    for (int i = 0; i < n; i++)
        scanf("%d", &h[i]);
    qsort(m, n, sizeof(int), cmp);
    qsort(h, n, sizeof(int), cmp);
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (abs(m[i] - h[i]) > max)
            max = abs(m[i] - h[i]);
    }
    printf("%d", max);
    return 0;
}