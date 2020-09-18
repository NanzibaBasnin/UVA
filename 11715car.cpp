#include<stdio.h>
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
    int n;
    int o=0;
    while(cin >> n)
    {   float u, v, t, a, s;
         o++;
        if(n==0)
        {
            break;
        }
        if(n==1)
        {
            cin >>  u >> v >> t;
            a=(v-u)/t;
            s= u*t + 0.5*(a *t *t);

            printf("Case %d: %.3f %.3f\n", o, s, a);
            //printf("%.3f\n", a);

        }
        if(n==2)
        {
            cin >> u >> v >> a;
            t= (v-u)/a;
            s= (0.5* (v*v - u*u))/a ;
            printf("Case %d: %.3f %.3f\n", o, s, t);
        }
        if(n==3)
        {
            cin >> u>> a >> s;
            v=sqrt(u*u + 2*a*s);
            //v=sqrt(v1);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n", o, v, t);
        }
        if(n==4)
        {
            cin >> v >> a >>s;
            u=sqrt(v*v - 2*a*s);
            t=(v-u)/a;
            printf("Case %d: %.3f %.3f\n", o, u, t);


        }
    }
}
