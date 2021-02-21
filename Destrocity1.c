#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int minmoves(int a[], int l, int h, int x)
{
    if (h < l)
        return 0;
    int res = 1005;
    for (int i = l; i <= h; i++)
    {
        if (a[i] == x)
        {
            res = minmoves(a, l, i - 1, x) + minmoves(a, i + 1, h, x);
            break;
        }
    }
    if (res == 1005)
        res = 1 + minmoves(a, l, h, x + 1);
    if (h - l + 1 <= res)
        return h - l + 1;
    else
        return res;
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
            scanf("%d", &a[i]);
        printf("%d\n", minmoves(a, 0, n - 1, 0));
    }
    return 0;
}