#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,n ,a ,b ,t,s;

     scanf ("%d",&t) ;
     for (int i=1 ; i<=t ; i++)
          {
               scanf ("%d",&n) ;
                    m=n ;
                    s=0;
               while (s!=1)
               {
                         s=0 ;

                    while (m>0)
                    {
                         a = m%10 ;
                         m= m/10 ;
                         s= s+a*a ;
                         //m=b ;
                         //cout<<m<<"   ";
                    }
                     m=s ;
                        // cout<<m<<endl;

               if (s<=9)
                    {
                    if(s!=1) printf ("Case #%d: %d is an Unhappy number.\n",i ,n) ;
                    if (s==1)
                    printf ("Case #%d: %d is a Happy number.\n",i ,n ) ;
                    break;
                    }
               }
          }
    return 0;
}
