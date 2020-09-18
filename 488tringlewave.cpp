#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int n, a, f;
    cin >> n;
    //printf("\n");
    while(n--)
    { // n--;
        cin >> a;
        //printf("\n");
        cin >> f;
        printf("\n");
        for(int i=0; i<f; i++)
        {
            for(int i=1; i<=a; i++)
            {
                for(int j=1; j<=i; j++)
                {
                    printf("%d", i);
                }
                printf("\n");
            }

            for(int i=a-1; i>=1; i--)
            {
                for(int j=i; j>=1; j--)
                {
                    printf("%d", i);
                }
                printf("\n");
            }
            printf("\n");
        }
    }

}
