#include<bits/stdc++>
using namespace std;
int ls(char *in, char k, int n)
{
    for (int i = 0; i < n; i++)
        if (in[i] == k)
            return i;
    return -1;
}
void printPostOrder(char *in, char *pre, int n)
{
    int root = ls(in, pre[0], n);
    if (root != 0)
        printPostOrder(in, pre + 1, root);
    if (root != n - 1)
        printPostOrder(in + root + 1, pre + root + 1, n - root - 1);
    cout << pre[0];
}

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char in[105], pre[105];
    cin >> in >> pre;
    int n = strlen(in);
    printPostOrder(in, pre, n);
    return 0;
}