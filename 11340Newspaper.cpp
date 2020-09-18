#include<bits/stdc++.h>
using namespace std;
int main(int argc, const char * argv[])
{
    map<char, int> mp;
    //map <string, int>::const_iterator it;
    int N;
    string s;
    int K, M;
    char c;
    double total;
    int x;
    cin >> N;
    while(N--)
    {
        //int K, M;
        //char c;
        //int x;
        cin >> K;

        total=0;
        while (K--) {
            cin>> c>> x;
            mp.insert(pair<char, int>(c, x));
        }

        //c=getchar();
        cin >>M;
        getchar();
       // string s;
        //string ch;
         while (M--) {
            getline(cin, s);
            for (int i=0; i<s.size() ; i++) {
                    //char sh= s[i];
                if (mp[s[i]])
                    {
                    total+=mp[s[i]];
                }
            }
        }


        printf("%.2lf$\n", total/100);
        mp.clear();



    }
}
/*1
7
 a 3
  W 10
   A 100
   , 10
   k 7
   . 3
   I 13
   7*/

