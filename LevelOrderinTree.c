#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int t[1005][1005], v[1005], n, x, y;
int d[1005], q[1005], f = 0, r = -1;
void bfs(int s)
{
    q[++r] = s;
    v[s] = 1;
    d[s] = 1;
    while (f <= r)
    {
        int x = q[f++];
        for (int i = 1; i <= n; i++)
        {
            if (t[x][i] == 1 && v[i] == 0)
            {
                q[++r] = i;
                v[i] = 1;
                d[i] = d[x] + 1;
            }
        }
    }
}
int main()
{
    scanf("%d", &n);
    for (int i = 0; i < n - 1; i++)
    {
        scanf("%d%d", &x, &y);
        t[x][y] = 1;
        t[y][x] = 1;
    }
    bfs(1);
    int k, c = 0;
    scanf("%d", &k);
    for (int i = 1; i <= n; i++)
        if (d[i] == k)
            c++;
    printf("%d", c);
    return 0;
}
