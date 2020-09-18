#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int arr[256], srr[600];
//int compare(int M, int A, int R,int G, int I, int T);


int main()
{
    //nt arr[]
    string s;
    int t;
    cin >> t;
    int cntM;
    int cntA;
    int cntR;
    int cntG;
    int cntT;
    int cntI;
    int cnt;
    while(t--)
    {
        cin>> s;
        cntM=cntA= cntR= cntG= cntI= cntT=0;
        for(int i=0; i<s.length(); i++)
        {
            //srr[s1[i]]++;
            if(s[i]=='M')
            {
                cntM++;
            }
            if(s[i]=='A')
            {
                cntA++;
            }
            if(s[i]=='G')
            {
                cntG++;
            }
            if(s[i]=='I')
            {
                cntI++;
            }
            if(s[i]=='T')
            {
                cntT++;

            }
            if(s[i]=='R')
            {
                cntR++;
            }
        }
        //compare(cntM, cntA, cntR, cntI, cntT);
        //int M=cntM, A=cntA, R= cntR, G= cntG, I= cntI, T= cntT;
        cnt=0;
        while(1)
        {

            if(cntM>=1 && cntA>=3 && cntR>=2 && cntG>=1 && cntI>=1 && cntT>=1)
            {
                cnt++;
                cntM=cntM-1;
                cntA=cntA-3;
                cntR=cntR-2;
                cntG=cntG-1;
                cntI=cntI-1;
                cntT=cntT-1;
            }
            else
            {
                break;
            }

        }
        printf("%d\n", cnt);


    }
    return 0;


}
