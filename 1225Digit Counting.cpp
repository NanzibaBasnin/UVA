#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t, n,c;
    string s;
    int arr[100];
    cin >> t;
    while(t--)
    {
        cin >> n;
        //c=0;
        for(int i=1; i<=n; i++)
        {
            s+= i;
            //c++;
        }
       //printf("%s", s);
       cout << s;


    }
}
