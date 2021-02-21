#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> g[1005], rg[1005];
int n, m;
int special(vector<int> h[])
{
    int c = 0;
    for (int i = 1; i <= n; i++)
    {
        for (auto j = h[i].begin(); j != h[i].end(); j++)
        {
            if (h[*j].size() == 0)
            {
                c++;
                break;
            }
        }
    }
    return c;
}
int main()
{
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        g[x].push_back(y);
        rg[y].push_back(x);
    }
    cout << max(special(g), special(rg));
    return 0;
}