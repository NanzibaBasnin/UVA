#include <stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e,f,A,B,C,D,E;
    while(cin >> a >> b >> c >> d >> e >> A >> B >> C >> D >> E )
    {//scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
    //scanf("%d%d%d%d%d", &A,&B,&C,&D,&E);
    if(a==A || b==B || c==C || d==D || e==E)
    {printf("N\n");}
    else
    {printf("Y\n");}
    }
}

