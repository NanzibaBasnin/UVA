
#include<iostream>

#include<bits/stdc++.h>
using namespace std;
int main()
{
    //char s[10000];
    int t;
    //stack<char>st;
    cin >> t;
    while(t--)
    {
         //string s;
     // getline(cin, s);
      stack<char>st;
      char s[140];
      gets(s);
       for(int i=0; i<strlen(s); i++)
       {
           if(st.size()>0 && s[i]=='(' && st.top()==')')
           {
               st.pop();
           }
           if(st.size()>0 && s[i]=='[' && st.top()==']')
           {
                st.pop();
           }
           else
           {
               st.push(s[i]);
           }
       }
       if(st.size()==0)
       {
           printf("Yes\n");

       }
       else
       {
           printf("No\n");
       }
    }

}
