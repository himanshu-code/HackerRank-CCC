#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> adj[1005];
bool v[1005];
int n, m;
void dfs(int s)
{
    v[s] = 1;
    for (auto i = adj[s].begin(); i != adj[s].end(); i++)
    {
        if (v[*i] == 0)
        {
            dfs(*i);
        }
    }
}
int main()
{
    cin >> n >> m;
    int x, y;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int s, c = 0;
    cin >> s;
    dfs(s);
    for (int i = 1; i <= n; i++)
        if (v[i] == 0)
            c++;
    cout << c;
    return 0;
}