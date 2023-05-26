#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,x,y,x0,y0;
cin>>n;
x=0;
y=0;
for (int i = 0; i < n; i++)
{
    int l,r;
    cin>>l>>r;
    x=x+l;
    y=y+r;

}
x0=n-x;
y0=n-y;

cout<<min(x0,x)+min(y0,y);
return 0;    
}