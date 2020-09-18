#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    string s, s1, s2;
    while(getline(cin, s))
    {
        if(s=="DONE")
        {
            break;
        }

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                //s1[i]= s[i];
                s1+= s[i];
            }
        }
        // cout<< s1;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]= s1[i] +32;
            }
        }
        //cout << s1;
         s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s1==s2)
        {
            printf("You won't be eaten!\n");
        }
        else if(s1!=s2)
        {
            printf("Uh oh..\n");
        }
        //s2="0";

    }
    return 0;


}


