#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int sum, mult, arr[11], x, n, t, y;
    cin>>t;
    int o=0;
    while(t--)
    { o++;
        cin >>n;
        mult=1;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
            mult= mult * arr[i];
        }
        //cout << mult <<endl;
        long long int ans=0;
        for(int i=0; i<n; i++)
        {
            //x=mult/arr[i];
            //cout<< "x "<<x<<endl;
            //if(x!=mult)
            //{
               // sum = sum + x;
                //cout <<"sum" <<sum <<endl;
           // }
           ans= arr[i]/mult + ans;

        }
        cout<< ans;
        y= sum + mult;
        long long int p = __gcd(mult, y);
        //cout << p;
        long long int a, b;
        a=y/p;
        //cout << a <<endl;
        b=mult/p;
        //cout <<b <<endl;
        /*long long int c;
        c= n * b;
        long long int q = __gcd(c, a);
        long long int res1= c/q;
        long long int res2 = a/q;
        printf("Case %d: %lld/%lld\n", o, res1, res2);*/



    }

}
/*
2
4 1 2 3 4
4 2 2 3 1
*/
