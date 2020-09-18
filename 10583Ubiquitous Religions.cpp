#include<bits/stdc++.h>
using namespace std;
int cnt;
 int visited[10000]={0};
 vector<int>node[10000];
 //int mx=0;
void dfs(int u)
{
    visited[u]=1;
    
    for(int i=0; i<node[u].size(); i++)
    {
        int v= node[u][i];
        if(visited[v]== 0)
        {
            dfs(v);
        }
    }

}
int main()
{
    //vector<int>node[10000];
    int n, e;
     //int visited[10000]={0};
    //cin>> n;
    //cin>> e;
while(cin>> n >> e)
{
     if(n==0 && e==0)
     {
         break;
     }

    for(int i=0; i<e; i++)
    {
        int x, y;
        cin >> x >> y;
        //while()
        node[x].push_back(y);
        node[y].push_back(x);
    }
    /*for(int i=1; i<=n; i++)
    {
        cout<<i<<" ";
        for(int j=0; j<node[i].size(); j++)
        {
            cout<<node[i][j]<<" ";
        }
        cout<<endl;
    }*/
    //int mx=0;

    for(int i=1; i<=n; i++)
    {
        if(visited[i]== 0)
        {
           // cnt=0;
            dfs(i);

        }
    }
    cout << cnt;
    for(int i=1; i<=n; i++)
    {
        node[i].clear();
    }
}
}
