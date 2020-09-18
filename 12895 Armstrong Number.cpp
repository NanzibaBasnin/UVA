
#include<stdio.h>
#include<iostream>
#include<cmath>
//#include<math.h>
using namespace std;
int count(int n)
{
    int cnt=0;
    while(n>0)
    {
        n=n/10;
        cnt++;
    }
    return cnt;

}
long long int poww(int b, int p)
{
    long long int res=1;
    for(int i=1; i<=p; i++)
    {
        res= res* b;
    }
    return res;
}
long long arm(int n)
{
    long long int y, w=0, x=n;
    long long int p= count(n);

    while(n>0)
    {    y= n%10;

        w=w+ poww(y, p);
         n=n/10;

    }
    return w;

}
/*long long int poww(int b, int p)
{
    long long int res=1;
    for(int i=1; i<=p; i++)
    {
        res= res* b;
    }
    return res;
}*/
int main()
{
    int t;
    long long int n;
    cin>> t;
    while(t--)
    {
        cin>> n;
        //printf("%lld ", arm(n));
        if(n==arm(n))
        {
            printf("Armstrong\n");
        }
        else
        {
            printf("Not Armstrong\n");
        }
    }
}
