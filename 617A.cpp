#include <bits/stdc++.h>
using namespace std;

int main()
{
int x,t,y;
cin>>x;    
t=x%5;
y=x-t;
if (t==0)
{
    cout<<x/5;
}
else
{
    cout<<(x/5)+1;
}

return 0;    
}