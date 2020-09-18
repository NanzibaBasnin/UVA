#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, k;
    while(cin>> n>>k)
    {
        int a[10005]= {0}, b[10005]= {0};
        int c=0;
       // int i;


            for(int i=1; i<=k; i++)
        {
            //a[c++]= i;
            cin >> a[i];
        }
        //int f=0;
       for(int i=1; i<=n; i++)
       {
           int f=0;
           for(int j=1; j<=k; j++)
           {
               if(a[j]== i)
               {
                   f=1;

                   break;
               }
               if(f==1)
               {
                   printf("* ", i);
               }
           }
           if(f==0)
           {
               printf("%d ", i);
           }

         /* else
          {
              printf("*");
          }*/
       }
       if(f==1)
       {
           printf("*");
       }
       printf("\n");

    }
}
