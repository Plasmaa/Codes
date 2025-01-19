#include <bits/stdc++.h>
using namespace std;

const int N = 2e5 + 5;
int parF[N], parG[N], group_sizeF[N], group_sizeG[N], levelF[N], levelG[N];

void dsu_initialize(int n)
{
    for (int i = 1; i <= n; i++)
    {
        parF[i] = parG[i] = -1;
        group_sizeF[i] = group_sizeG[i] = 1;
        levelF[i] = levelG[i] = 0;
    }
}

int dsu_find(int node, int par[])
{
    if (par[node] == -1)
        return node;
    int leader = dsu_find(par[node], par);
    par[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2, int par[], int group_size[])
{
    int leaderA = dsu_find(node1, par);
    int leaderB = dsu_find(node2, par);
    if (leaderA != leaderB)
    {
        if (group_size[leaderA] > group_size[leaderB])
        {
            par[leaderB] = leaderA;
            group_size[leaderA] += group_size[leaderB];
        }
        else
        {
            par[leaderA] = leaderB;
            group_size[leaderB] += group_size[leaderA];
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, m1, m2;
        cin >> n >> m1 >> m2;

        // Initialize the DSU structures for F and G
        dsu_initialize(n);

        // Process edges for graph F
        for (int i = 0; i < m1; i++)
        {
            int u, v;
            cin >> u >> v;
            dsu_union_by_size(u, v, parF, group_sizeF);
        }

        // Process edges for graph G
        for (int i = 0; i < m2; i++)
        {
            int u, v;
            cin >> u >> v;
            dsu_union_by_size(u, v, parG, group_sizeG);
        }

        // Now compare the connectivity in both graphs
        int addOperations = 0, removeOperations = 0;

        // Check each pair of nodes
        for (int u = 1; u <= n; u++)
        {
            for (int v = u + 1; v <= n; v++)
            {
                int leaderF_u = dsu_find(u, parF);
                int leaderF_v = dsu_find(v, parF);
                int leaderG_u = dsu_find(u, parG);
                int leaderG_v = dsu_find(v, parG);

                // If they are connected in G but not in F, we need to add an edge
                if (leaderG_u == leaderG_v && leaderF_u != leaderF_v)
                {
                    addOperations++;
                }

                // If they are connected in F but not in G, we need to remove an edge
                if (leaderF_u == leaderF_v && leaderG_u != leaderG_v)
                {
                    removeOperations++;
                }
            }
        }

        // The result is the sum of the operations
        cout << addOperations + removeOperations << endl;
    }

    return 0;
}
