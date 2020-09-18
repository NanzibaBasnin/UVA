#include<stdio.h>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t, o, t1, t2, f, a, ct1, ct2, ct3;
    int arr[3]= {0};
    cin>> t;
    o=0;
    while(t--)
    {  o++;

        cin>> t1 >> t2 >> f >> a >> ct1 >> ct2 >> ct3;
        int arr[3]= {ct1, ct2, ct3};
        sort(arr, arr+3);
        /*for(int i=0; i<3; i++)
        {


            cout<< arr[i];
        }*/
        int avg= (arr[1] + arr[2])/2;
        //cout << avg;
        int sum= t1 + t2 + f + a +avg;
        //cout << sum;
        if(sum >= 90)
        {
            printf("Case %d: A\n", o);
        }
        if(sum >=80 && sum< 90)
        {
            printf("Case %d: B\n", o);
        }
        if(sum>=70 && sum<80)
        {
            printf("Case %d: C\n", o);
        }
        if(sum>=60 && sum<70)
        {
            printf("Case %d: D\n", o);
        }
        if(sum<60)
        {
            printf("Case %d: F\n",o);

        }
    }
}
