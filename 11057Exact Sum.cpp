#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int n, m;
    int arr[1050];
    int s[103];
    while(1)
    {
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
       /* for(int i=0; i<n; i++)
        {
            cout << arr[i];
        }*/
        cin >> m;
        sort(arr, arr+n);
         int c=0;
         int sum=0;
         int a, b;
         int min =0;
        for(int i=0; i<n; i++)
        {    //c=0;
            for(int j=0; j<n; j++)
            {     if(arr[i]!= arr[j])

                    { sum = arr[i] + arr[j];
                         //c++;
                         arr[i] = a;
                         arr[j]=b;

                         if(sum == m)
                         {
                            //arr[i] = a;
                            //arr[j] = b;
                            //min = a-b;
                            printf("%d %d", a, b);
                         }
                    }

            }
        }
       // printf("%d %d", a, b);
        /*for(int i=0; i<c; i++)
        {
            cout << s[i]<< endl;
        }*/

    }
}
