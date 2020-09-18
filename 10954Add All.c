#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority queue<int, vector<int>, greater<int>> q;
    int t=0;
    int c=0;
    int n;
    int x;
    while(1)
    {
        cin >>n;
        for(int i=0; i<n; i++)
        {
            cin>>x;
        }

    while(q.size()>1)
    {
        t= q.top();
        q.pop();
        t= t+ q.top();
        c=c+t;
        q.push(c);

    }
    cout << c<<endl;
    }
}
