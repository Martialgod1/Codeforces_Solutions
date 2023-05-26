#include<bits/stdc++.h>

using namespace std;

int main()
{
int m,n;
cin>>m>>n;
int t;
t=m*n;

if (t%2==0)
{
    cout<<t/2;
}
else
{
    cout<<(t-1)/2;
        
}

return 0;  
}