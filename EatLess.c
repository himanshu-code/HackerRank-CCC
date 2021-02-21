#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int cmp(long *a, long *b)
{
    return *b - *a;
}
int main()
{
    int n;
    scanf("%d", &n);
    long a[n];
    for (int i = 0; i < n; i++)
        scanf("%ld", &a[i]);
    qsort(a, n, sizeof(long), cmp);
    long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i] * pow(2, i);
    }
    printf("%ld", sum);
    return 0;
}