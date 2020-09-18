#include<bits/stdc++.h>
using namespace std;
bool comp(pair< string, int> a, pair<string, int> b) {
    return a.second<b.second;
}
int main()
{
    int t;
    //string ss;
    vector <pair < string, int > > node;

    cin >> t;
    int o=0;
    while(t--)
    {
        o++;
        string ss;
        int vn;
        int n=10;
        int large;
        //vector<pair<string, int > node[110];
        for(int i=1; i<=n; i++)
        {
            cin >>ss;
            cin >>vn;
            node.push_back( make_pair(ss,vn));

        }
        /*for(int i=1; i<=10; i++)
        {
            cout<<node[i].first<<" "<<node[i].second<<endl;;
        }*/
        sort(node.begin(), node.end(),comp);
        /*for(int i=1; i<=node.size(); i++)
        {
            cout<<node[i].first<<" "<<node[i].second<<endl;;
        }*/
        int len= node.size();
        printf("Case #%d:\n", o);

        for(int i=1; i<=len; i++)
        { large = node[len-1].second;
            if(node[i].second== large){
                    //printf("Case #%d:\n", o);
          cout <<node[i].first<<endl;
         }
        }

     node.clear();

    }
}
/*2
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 10
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
www.university.edu.cn 9
acm.university.edu.cn 10
www.youtube.com 1
www.google.com 2
www.google.com.hk 3
www.alibaba.com 11
www.taobao.com 5
www.bad.com 10
www.good.com 7
www.fudan.edu.cn 8
acm.university.edu.cn 9
acm.university.edu.cn 10*/
