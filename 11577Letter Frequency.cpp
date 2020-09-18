
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int arr[256];
int main()
{
    int t;
    //string s, s1;
    cin >> t;
    getchar();
    while(t--)
    {
        string s, s1;
        getline(cin, s);

        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='A'&& s[i]<='Z' || s[i]>='a' && s[i]<='z')
            {
                s1+=s[i];
            }
        }
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                s1[i]= s1[i] +32;
            }
        }
        for(int i=0; i<s1.length(); i++)
        {

            arr[s1[i]]++;
        }
        int mx=0;
        for(int i=97; i<=122; i++)
        {
            if(arr[i]> 0)
            {


                if(mx< arr[i])
                {
                    mx= arr[i];
                }
            }
        }
        for(int i=97; i<=122; i++)
        {
            if(arr[i]== mx)
            {
                printf("%c", i);
            }
            arr[i]=0;
            //printf("\n");
        }
        printf("\n");


    }
    return 0;
}
