#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n,t,y;    
cin>>n;
t=n/2;
y=((-1)*(0.5)*(n+1));
if (n%2==0)
{
    cout<<t;
}
else
{  
    cout<<y;
}

return 0;    
}