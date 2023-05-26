#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x,t;
cin>>n;
x=0;
t=0;
for (int i = 0; i < n; i++)
{
    int a,b;
    cin>>a>>b;
    x=x-a;
    x=x+b;
    t=max(t,x);
}

cout<<t;
return 0;    
}