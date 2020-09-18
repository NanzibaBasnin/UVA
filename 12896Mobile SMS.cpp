#include<stdio.h>
#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t, l;
    //string s='"';
    char er = '"';
    int arr[105], srr[105];
    cin >> t;
    while(t--)
    {
        cin >> l;
        for(int i=0; i<l; i++)
        {
            cin >> arr[i];
        }
        for(int i=0; i<l; i++)
        {
            cin >> srr[i];
        }
        for(int i=0; i<=l; i++)
        {
            if(arr[i] == 0)
            {
                printf(" ");
            }
            if(arr[i]== 1)
            {


                    if(srr[i] == 1)
                    {
                        printf(".");

                    }
                    if(srr[i]== 2)
                    {
                        printf(",");
                    }
                    if(srr[i] == 3)
                    {
                        printf("?");
                    }
                    if(srr[i] == 4)
                    {
                        printf("%c", er);
                    }


            }
            if(arr[i]== 2)
            {
                if(srr[i]== 1)
                {
                    printf("a");
                }
                if(srr[i] == 2)
                {
                    printf("b");
                }
                if(srr[i] == 3)
                {
                    printf("b");
                }
            }
            if(arr[i]== 3)
            {
                if(srr[i] == 1)
                {
                    printf("d");
                }
                if(srr[i] == 2)
                {
                    printf("e");
                }
                if(srr[i] == 3)
                {
                    printf("f");
                }
            }
            if(arr[i] == 4)
            {
                if(srr[i]== 1)
                {
                    printf("g");
                }
                if(srr[i] == 2)
                {
                    printf("h");
                }
                if(srr[i]== 3)
                {
                    printf("i");
                }

            }
            if(arr[i] == 5)
            {
                if(srr[i] == 1)
                {
                    printf("j");
                }
                if(srr[i] == 2)
                {
                    printf("k");
                }
                if(srr[i] == 3)
                {
                    printf("l");
                }
            }
            if(arr[i] == 6)
            {
                if(srr[i]== 1)
                {
                    printf("m");
                }
                if(srr[i] == 2)
                {
                    printf("n");
                }
                if(srr[i] == 3)
                {
                    printf("o");
                }
            }
            if(arr[i] == 7)
            {
                if(srr[i]== 1)
                {
                    printf("p");
                }
                if(srr[i] == 2 )
                {
                    printf("q");
                }
                if(srr[i] == 3)
                {
                    printf("r");
                }
                if(srr[i] == 4)
                {
                    printf("s");
                }
            }
            if(arr[i]== 8)
            {
                if(srr[i] == 1)
                {
                    printf("t");
                }
                if(srr[i] == 2)
                {
                    printf("u");
                }
                if(srr[i]==3)
                {
                    printf("v");
                }
            }
            if(arr[i] == 9)
            {
                if(srr[i] == 1)
                {
                    printf("w");
                }
                if(srr[i] == 2)
                {
                    printf("x");
                }
                if(srr[i] == 3)
                {
                    printf("y");
                }
                if(srr[i] == 4)
                {
                    printf("z");
                }
            }
        }
    }
}
