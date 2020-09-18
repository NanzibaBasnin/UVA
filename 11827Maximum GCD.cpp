#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     string s;
      vector<long long > v;
    cin >> t;
    //long long int mx=0;

    while(t--)
    {
           long long int mx=0;
        getline(cin, s);
        getchar();
        stringstream ss(s);
        getchar();
        int x;
        while(ss>>x)
             v.push_back(x);

        long long int p;
        //long long int mx=0;
        for(int i=0; i<v.size(); i++)
            for(int j=i+1; j<v.size(); j++)
                  p = __gcd(v[i],v[j]);
               // cout <<mx<<endl;
                   mx = max(mx, p);


        cout <<mx<<endl;

    }

    //cout << mx<<endl;
}
