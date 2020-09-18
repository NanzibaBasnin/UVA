#include<stdio.h>
#include<iostream>
#include<cmath>
#include<math.h>
#include<algorithm>
using namespace std;
int srr[2005];
int cnt;
int binaryconvert(int a)
{ int l=0;
    while(a!=0)
    {
        srr[l] = a%2;
        l++;
        a=a/2;
    }
    cnt = count(srr, srr+l, 1);
    cout << cnt;

}
int main()
{
    int n, x , y, arr[2005];
    cin >> n;
    int i=0;
    while(n!=0)
    {
        arr[i]=n%10;
        i++;
        n=n/10;


    }
    int sum =0;
    for(int j=0; j<i ; j++)
    {
        //cout << arr[j];
        y=arr[j] * pow(16, j);
        sum = sum + y;
    }
    cout << sum;
    binaryconvert(sum);
}
