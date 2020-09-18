#include<bits/stdc++.h>

using namespace std;
int main()
{
    int t, tt;
    map<string, string> mp;
    string s, ss;
    cin >> t;
    getchar();
    for(int i=0; i<t; i++)
    {
        //string s, ss;
        getline(cin, s);
        getline(cin, ss);
        mp[s]= ss;



    }
    cin >>tt;
    getchar();
    for(int i=0; i<tt;i++)
    {
        string sss;
        getline(cin , sss);
        cout<<mp[sss]<<endl;



    }
    mp.clear();

}
