#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    int o=0;
    string  s;

    while(1)
    {   cin >> s;
        o++;
        //for(int i=0; i<s.length(); i++)
        //{
            if(s=="HELLO")
            {
                //f=1;
                printf("Case %d: ENGLISH\n", o);

            }
             else if(s=="HOLA")
            {
                //f=2;
                printf("Case %d: SPANISH\n", o);

            }
             else if(s=="HALLO")
            {
               //f=3;
               printf("Case %d: GERMAN\n", o);
            }
             else if(s=="BONJOUR")
            {
                //f=4;
                printf("Case %d: FRENCH\n", o);

            }
             else if(s=="CIAO")
            {
               // f=5;
                printf("Case %d: ITALIAN\n", o);
            }
            else if(s=="ZDRAVSTVUJTE")
            {
                //f=6;
                printf("Case %d: RUSSIAN\n", o);
            }
            else if(s=="#")
            {
               // return 0;
               break;
            }

            //if(s!="HELLO" && s!="HOLA" && s!="HALLO" && s!="BONJOUR" && s!="CIAO" && s!="ZDRAVSTVUJTE")
            else
            {
                printf("Case %d: UNKNOWN\n", o);
            }
        }
        return 0;


}
