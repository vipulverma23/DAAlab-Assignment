#include<bits/stdc++.h>
using namespace std;

void path(vector<int>& parent, int j)
{
    if (parent[j] == - 1)
    {
        cout<<j;
        return;
    }
    printf("%d ", j);
    path(parent, parent[j]);
}

int main()
{
    int n,e;
    cin>>n>>e;
    vector<vector<int>> edges;
    for(int i=0;i<e;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        edges.push_back({u,v,w});
        edges.push_back({v,u,w});
    }
    vector<int> parent(n+1,-1);
    vector<int> dist(n+1, 1e9);
    int src;
    cin>>src;
    dist[src] = 0;
    bool negative_cycle;
    for(int i=1;i<n;i++)
    {
        negative_cycle = false;
        for(auto it: edges)
        {
            int u,v,w;
            u = it[0];
            v = it[1];
            w = it[2];
            if(dist[v] >  dist[u]+w)
            {
                dist[v] = dist[u]+w;
                parent[v] = u;
                negative_cycle = true;
            }
        }
    }
    if(negative_cycle)
        cout<<"negative cycle present";
    else
    {
        for(int i=1;i< n+1;i++)
        {
            path(parent, i);
            cout<<" : "<<dist[i]<<endl;
        }
    }
    return 0;
}
