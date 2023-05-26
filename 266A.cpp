#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,t;
cin>>n;
string s;
cin>>s;
t=0;
for (int i = 0; i < n-1; i++)
{
    if (s[i]==s[i+1])
    {
        t=t+1;
    }
}

cout<<t;
return 0;    
}