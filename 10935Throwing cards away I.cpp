#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {   if(n==0)
        {
            return 0;
        }
        queue<int> a;
        for(int i=1; i<=n; i++)
        {
            a.push(i);
        }
        printf("Discarded cards: ");
        while(a.size()>1)
        {
            printf("%d", a.front());
            a.pop();
            if(a.size()>=1)
            {
                printf(",");
            }
            //cout<<"pop" << a.front()<< endl;
            int y = a.front();
            //cout <<"y" << y<< endl;//why am I doing this operation
            a.push(y);
            //cout << "push"     << a.front()<< endl;

            a.pop();
            //printf("Remaining card: %d\n", a.front());
            //cout << "pop" << a.front()<< endl;
        }
        printf("\n");
        printf("Remaining card: %d\n", a.front());
        a.pop();



    }
}
