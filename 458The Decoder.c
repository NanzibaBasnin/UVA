#include<stdio.h>


#include<string.h>

int main()
{
    char ch[100];
    int i, j;
    while(gets(ch))
    {
        int l=strlen(ch);
        for( i=0; i<=l;i++)
        {
            //ch[i]=ch[i]-7;
            printf("%c\n", ch[i]-7);
        }


    }
}
