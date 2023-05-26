#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, k, l, c, d, p, nl, np,x,y;
cin>>n>>k>>l>>c>>d>>p>>nl>>np;

x=min((k*l)/nl,(p/np));
y=min(x,(c*d));
cout<<y/n;
return 0;    
}