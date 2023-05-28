#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,max1=0,t;
cin>>n>>m;
for (int i = 1; i <= n; i++)
{
    double x;
    cin>>x;
    if (ceil(x/m)>=max1)
    {   
        t=i;
        max1=ceil(x/m);
    }
}
cout<<t;

return 0;
}