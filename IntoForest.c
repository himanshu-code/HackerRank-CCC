#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int am[1005][1005], vis[1005], n, m, u, v, c;
void dfs(int s)
{
    vis[s] = 1;
    c++;
    for (int i = 1; i <= n; i++)
    {
        if (am[s][i] == 1 && vis[i] == 0)
        {
            dfs(i);
        }
    }
}
int main()
{
    scanf("%d%d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &u, &v);
        am[u][v] = 1;
        am[v][u] = 1;
    }
    int max = 0, min = 1005, x = 0;
    for (int i = 1; i <= n; i++)
    {
        if (vis[i] == 0)
        {
            c = 0;
            dfs(i);
            if (c > max)
                max = c;
            if (c < min)
                min = c;
            x++;
        }
    }
    printf("%d %d %d", max, min, x);
    return 0;
}
