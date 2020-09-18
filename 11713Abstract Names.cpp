
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s1, s2;
    int n, t;
    cin >> n;
    while(n--)
    {   //t=n*2;
        //t--;
        //for(int i=0; i<n; i++)
        cin >> s1;
        cin>> s2;

        if(s1.length()== s2.length())
        {
             for(int i=0; i<s1.length(); i++)
             {
                 if(s1[i]== 'e' || s2[i]== 'e')
                 {
                     s1[i]='0';
                     s2[i]='0';
                 }
                 if(s1[i] == 'i' || s2[i] == 'i')
                 {
                     s1[i]='0';
                     s2[i]='0';
                 }
                 if(s1[i] == 'o' || s2[i] == 'o')
                 {
                     s1[i]='0';
                     s2[i]='0';
                 }
                 if(s1[i] == 'a' || s2[i] == 'a')
                 {
                     s1[i]='0';
                     s2[i]='0';
                 }
                 if(s1[i] == 'u' || s2[i]== 'u')
                 {
                     s1[i]='0';
                     s2[i]='0';
                 }
             }
             //if(s[])
             //cout << s1 << endl;
             //cout << s2 << endl;
             if(s1 == s2)
             {
                 printf("Yes\n");
             }
             else
             {
                 printf("No\n");
             }
        }
        else
        {
            printf("No\n");
        }
    }
}
