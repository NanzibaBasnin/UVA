#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cmath>
#include<math.h>
using namespace std;
int arr[2005], srr[2005];
int cnt;
int binaryconvert(int a)
{ int l=0;
   while(a!=0)
   {
       srr[l++]= a%2;
       a=a/2;
   }
    cnt= count(srr, srr+l, 1);
   //cout << cnt <<" ";
   //printf("\n");

}

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        binaryconvert(n);
        cout<< cnt;
        int h=n;
        int i=0;
        while(h!=0)
        {
           arr[i]= h%10;
           i++;
           h=h/10;
        }
        int m, x, y;
        int sum =0;
        for(int k=0; k<i; k++)
        {
            y = arr[k] *(pow(16, k));
            sum =sum + y;

        }
        //cout << sum;
        binaryconvert(sum);
        cout<<" "<<cnt;
        printf("\n");

    }
}
