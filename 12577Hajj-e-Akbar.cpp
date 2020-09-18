#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<string>

using namespace std;
int main()
{
    int t;
    int o=0;
    string s;
    //cin >> t;
    getchar();
    string s1 = "Hajj";
   string s2= "Umra";
    string s3="*";
    int f=1;
    while(cin>>s)
    {
        o++;
        //gets(s);
        //cin >> s;
       for(int i=0; i<s.length(); i++)
        {


        if(s[i]==s1[i])
        {
            //printf("Case %d: Hajj-e-Akbar\n", o);
            f=1;
        }
        if(s[i]==s2[i])
        {
            //printf("Case %d: Hajj-e-Asghar\n", o);
            f=2;
        }
        if(s[i]=='*')
        {
            return 0;
        }
        }
        if(f==1)
        {
            printf("Case %d: Hajj-e-Akbar\n", o);
        }
        if(f==2)
        {
            printf("Case %d: Hajj-e-Asghar\n", o);
        }


    }
}
