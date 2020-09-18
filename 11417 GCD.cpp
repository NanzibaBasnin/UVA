#include<bits/stdc++.h>
using namespace std;
int main()
{
     int N;

    while(cin >> N)
    {

        if(N==0)
        {
            break;
        }


        long long int g=0;
        for(int i=1; i<N; i++)
        {
            for(int j= i+1; j<=N; j++)
            {

                 g+= __gcd(i, j);

            }

        }
        cout <<g<<endl;
    }


}
/*G=0;
for(i=1;i<N;i++)
for(j=i+1;j<=N;j++)
{
G+=GCD(i,j);
}*/
