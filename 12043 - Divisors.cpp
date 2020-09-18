#include<iostream>
#include<stdio.h>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int a, b ,c, p;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        int d=0, s, s1, k;
        for(int i=a; i<=b; i++)
        {
             //d=0;
             if(i%c == 0)
             { p=sqrt(i);
                for(int j=1 ; j<= p; j++)
                {
                    if(i%j == 0)
                    {
                        d++;
                    }
                    s1= s1+j;
                    if(k=i/j)
                    {
                        d++;
                    }
                    s1= s1+j;
                }

             }

             s= s+c;
        }
        //s= s+c;
        printf("%d %d\n", s , s1);

    }

}
