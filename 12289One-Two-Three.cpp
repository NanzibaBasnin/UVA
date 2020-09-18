#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string s1="one";
    string s2= "two";
    string s3="three";
    string s;
    int cnt, cnt1;
    while(t--)
    {
        cin >> s;
        if(s.length() == s3.length())
        {
            printf("3\n");
        }
        if(s.length()==3)
        {
            if(s[0]=='t' && s[1] =='w' || s[1]=='w' && s[2]=='o'|| s == s2 || s[0] == 't' && s[2] == 'o')
            {
                printf("2\n");
            }
            if(s== s1 || s[1] == 'n' && s[2] == 'e' || s[0]=='o' && s[2] == 'e' || s[0]=='o' && s[1] == 'n')
            {
                printf("1\n");
            }
        }



    }
}
