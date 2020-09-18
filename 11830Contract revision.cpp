#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include<string.h>
using namespace std;
int main()
{
    int cnt=0;
    char  d;
    string n, s;
    while(cin >> d >> n)
    {
        if(d == '0' && n == "0")
        {

            break;
        }

        for(int i=0; i< n.length(); i++)
        {

            if(n[i]!= d)
            {
                s+= n[i];
            }

        }
        //cout <<  s;
        cnt = count(s.begin(), s.end(), '0');
        if(s.length() == cnt || s.length() == 0)
        {
            printf("0\n");
        }
        /*if(s.length() == 0)
        {
            printf("0\n");
        }*/
        else
        {
            cout << s << endl;
        }
        s.clear();




    }


}
