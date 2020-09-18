#include<bits/stdc++.h>
using namespace std;
//you have to find maximum adjacency list
int visited[10000]={0};
int cnt;
 vector<int>node[10000];
 map<string, int> mp;
 void dfs(int u)
{
    visited[u]=1;
    cnt++;
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
    int c, r;
    string s;
    while(cin>> c>>r)
    {

        for(int i=1; i<=c; i++)
        {
            cin>>s;
            mp[s] =i;
        }
        //to take adjacency list
        for(int i=0; i<r; i++)
        {
            string a, b;
            cin >> a>>b;
            node[mp[a]].push_back(mp[b]);
        }
int mx = 0;
        for(int i=1; i<=r; i++)
        {
            if(visited[i]== 0)
            {
                cnt=0;
                dfs(i);
                if(mx < cnt)
                   mx = cnt;
            }
        }
        cout<<cnt;
        for(int i=1; i<=c; i++)
    {
        node[i].clear();
    }
    }

}
