#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int t, o;
    int arr[10];
    cin >> t;
    o=0;
    while(t--)
    {
        o++;
        for(int i=0; i<3; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr+3);
        printf("Case %d: %d\n", o, arr[1]);
    }
}
