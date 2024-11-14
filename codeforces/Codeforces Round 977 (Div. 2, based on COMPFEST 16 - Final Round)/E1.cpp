#include <bits/stdc++.h>
using namespace std;

const int N = 405;           // Max size based on constraints
vector<pair<int, int>> v[N]; // Adjacency list for the graph
int dis[N];                  // Distance array for Dijkstra's algorithm

class cmp
{
public:
    bool operator()(pair<int, int> a, pair<int, int> b)
    {
        return a.second > b.second;
    }
};

void dijkstra(int src)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
    pq.push({src, 0});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<int, int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (cost + childCost < dis[childNode])
            {
                // Path relaxation
                dis[childNode] = cost + childCost;
                pq.push({childNode, dis[childNode]});
            }
        }
    }
}

int main()
{
    int t; // Number of test cases
    cin >> t;
    while (t--)
    {
        int n, m, p; // Number of houses, cables, and houses needing internet
        cin >> n >> m >> p;
        vector<int> houses(p); // Houses needing internet

        for (int i = 0; i < p; i++)
        {
            cin >> houses[i]; // Read houses needing internet
            houses[i]--;      // Convert to 0-based index
        }

        // Reset the graph
        for (int i = 0; i < n; i++)
            v[i].clear();

        for (int i = 0; i < m; i++)
        {
            int a, b, c; // Read each cable connection
            cin >> a >> b >> c;
            a--;
            b--; // Convert to 0-based index
            v[a].push_back({b, c});
            v[b].push_back({a, c});
        }

        vector<int> result(n, INT_MAX); // Result for each k
        for (int i = 0; i < p; i++)
        {
            // Reset distances for each house needing internet
            fill(dis, dis + n, INT_MAX);
            dijkstra(houses[i]); // Run Dijkstra from this house

            // For each possible number of servers (k)
            for (int k = 1; k <= n; k++)
            {
                // Compute the minimum total latency
                int totalLatency = 0;
                for (int j = 0; j < p; j++)
                {
                    if (dis[houses[j]] != INT_MAX)
                        totalLatency += dis[houses[j]];
                }
                // Take the maximum of totalLatency for the given k
                result[k - 1] = min(result[k - 1], totalLatency);
            }
        }

        // Print the result for the current test case
        for (int k = 0; k < n; k++)
        {
            cout << result[k] << " ";
        }
        cout << endl;
    }

    return 0;
}
