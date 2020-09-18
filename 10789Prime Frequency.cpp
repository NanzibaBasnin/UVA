#include<cmath>
#include<math.h>
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<string.h>
using namespace std;
bool checking_prime(int n)
{
    for(int i=2; i<=sqrt(n); i++)
    {
        if(n%i== 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    int arr[2000];
    int t;
    int o=0;
    cin >> t;
    while(t--)
    {
        o++;
       // getline(cin, s);
       cin >> s;
        memset(arr, 0, sizeof(arr));
       // printf("Case %d: ", o);
        int flag = 0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]>=65 && s[i]<=90)
            {
                arr[s[i]]++;
            }
            if(s[i]>=48 && s[i]<=57)
            {
                arr[s[i]]++;
            }
            if(s[i]>=97 && s[i]<= 122)
            {
                arr[s[i]]++;
            }
        }
        printf("Case %d: ", o);
        for(int i=48; i<=122; i++)
        {
            if(checking_prime(arr[i])== true && arr[i]!=0 && arr[i]!=1)
            {
                flag=1;
                printf("%c", i);
                //printf("\n");
            }
            //printf("\n");

        }
        if(flag == 0)
        {
            printf("empty");
        }
        puts("");



    }
    return 0;
}
