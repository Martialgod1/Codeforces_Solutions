#include <bits/stdc++.h>

using namespace std;

int main()
{
int k,n,w,t;
cin>>k>>n>>w;

t=(0.5*(k)*(w)*(w+1))-n;
if (t>=0)
{
    cout<<t;
}
else
{
    cout<<0;
}


return 0;
}