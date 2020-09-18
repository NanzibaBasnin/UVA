#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[100][100],p,m,co,flag;

    while(scanf("%d%d",&p,&m)==2)
    {

    flag=0,co=0;
        for(int i=0;i<p;i++)
        {
            for(int j=0;j<m;j++)
            {
                scanf("%d",&arr[i][j]);
            }
        }

        for(int i=0;i<p;i++)
        {

            for(int j=0;j<m;j++)
            {
                if(arr[i][j]==0)
                {

                    //flag=1;
                    break;
                }
                else if(j==m-1)
                {
                   // cout<<"co";
                    co++;
                }
            }
        }
        printf("%d\n",co);



    }






    return 0;
}
