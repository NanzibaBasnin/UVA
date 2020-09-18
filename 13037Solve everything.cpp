#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[20];
    long long int t, o=0;

    cin >> t;
    while(t--)
    {
        //cin >> s;
        //getline(cin,s);
        for(int i=0; i<13; i++)
        {
            cin >> arr[i];
        }
        //int f=0;
        o++;


    int f=0;
    for(int i=0; i<13; i++)
    {   //f=0;
        if(arr[i]== 0)
        {
            f=1;
        }
    }
    if(f==0)
    {
       printf("Set #%d: Yes\n", o);
    }
    else
    {
        printf("Set #%d: No\n", o);
    }
    }

}
