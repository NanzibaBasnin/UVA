#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    long long int n;
    int arr[2050];
    while(cin >> n)
    {
        if(n<0)
        {
            break;
        }
        int i=0;
      //  while(n!=0)
for(int k=0;k<100;k++)
        {
            arr[i++] = n%3;
            n= n/3;
        if(n==0)
break;

        }
        for(int j=i-1; j>=0; j--)
        {
            cout << arr[j];
        }
        printf("\n");

    }

}
