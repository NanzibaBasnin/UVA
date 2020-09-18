
#include<stdio.h>
#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    int n;

     int arr[1000];
    while(cin >> n)
    {
        if(n==0)
        {
            break;
        }
        int i;

         i =0;
            while(n!=0)
            {
                arr[i]= n%2;
                i++;
                n=n/2;


            }
            //reverse(s.begin(), s.end());
         cout <<"The parity of ";
         int cnt;
        for(int j=i-1; j>=0; j--)
        {
            //srr[j]= arr[j];
            cout << arr[j];

        }
        cnt = count(arr, arr+i, 1);
        cout <<" is ";
        cout << cnt;
        cout <<" (mod 2)."<< endl;

        //for(int j=0; j<)
    }
}
