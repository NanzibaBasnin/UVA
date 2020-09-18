#include<bits/stdc++.h>
using namespace std;
vector<int> node[1000005];
int dist[100000]={0};
int f;
void bfs(int src)
{
    dist[src]=0;
    queue<int> q;
    q.push(src);
    f=0;
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            int v= node[u][i];
            if(dist[v]==-1)
            {
                dist[v]= dist[u]+1;
                q.push(v);
            }
            if(dist[u]==dist[v])
            {
                f=1;
                return;
            }
        }
    }
}

int main()
{
    int n, e;
    while(cin >>n)
    {
        if(n==0)
        {
            break;
        }
        cin >> e;
         memset(dist, -1, sizeof dist);
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin >> x>>y;
            node[x].push_back(y);
            node[y].push_back(x);

        }

        bfs(0);
        if(f==1)
        {
            printf("NOT BICOLORABLE.\n");
        }
        if(f==0)
        {
            printf("BICOLORABLE.\n");
        }
          for(int i=0; i<n; i++)
        {
            node[i].clear();
        }



    }




    }

