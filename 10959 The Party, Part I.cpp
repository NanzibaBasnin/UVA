#include<bits/stdc++.h>
using namespace std;
vector<int> node[100005];
int dist[100005]= {0};

void bfs(int src)
{
    dist[src]=0;
    queue<int> q;
    q.push(src);
    while(!q.empty())
    {
        int u= q.front();
        q.pop();
        for(int i=0; i<node[u].size(); i++)
        {
            int v= node[u][i];
            if(dist[v]== -1)
            {
                dist[v]= dist[u]+1;
                q.push(v);
            }

        }
    }

}
int main()
{
    //vector<int> node[100000];
    int t, n, e;
    cin>>t;
    bool f = 0;
    while(t--)
    {

        cin >> n >>e;
        memset(dist, -1, sizeof dist);
        for(int i=0; i<e; i++)
        {
            int x, y;
            cin >> x>>y;
            node[x].push_back(y);
            node[y].push_back(x);

        }
        //cout<<endl;
        /*for(int i=0; i<n; i++)
        { cout<<i<<" ";
            for(int j=0; j<node[i].size(); j++)
            {cout<< node[i][j] <<" ";
            }
            cout<<endl;
        }*/
        // memset(dist, -1, sizeof dist);
        //src= node[0][0];
        //bfs(n);
        if(f)
            cout<< endl;

        f = true;
        bfs(0);
        for(int i = 1; i <= n-1; i++)
        {
            printf("%d\n", dist[i]);

        }
        for(int i=0; i<n; i++)
        {
            node[i].clear();
        }




    }
}
