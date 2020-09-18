#include<stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a, b;
    while(scanf("%d %d", &a, &b)== 2)
    {
        if(a==0 && b==0)
            break;
         int cnt=0;
        for(int i=a; i<=sqrt(b); i++)
        {   //int cnt=0;
            for(int j=a; j<=b; j++)
            {
                if(j== i*i)
                {
                    cnt++;
                }

            }
        }
       // cout << cnt <<endl;
        //printf("")
        printf("%d\n", cnt);
    }
}
