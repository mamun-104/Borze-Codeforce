#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    char c[200];
    cin>>c;
    //cout<<c;
    int i;
    for(i=0;c[i]!='\0';i++)
    {
        if(c[i]=='.') {cout<<0;}
        else
        {
            if(c[i]=='-' && c[i+1]=='.'){cout<<1; i++;}
            else {cout<<2; i++;}
        }
    }



    return 0;
}


