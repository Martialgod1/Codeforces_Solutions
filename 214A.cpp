#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,m,t=0;
cin>>n>>m;
for (int a = 0; a <=1000; a++)
{   
int b;
b=m-pow(a,2);
if (b<0)
{
    break;
}
else if (pow(b,2)==(n-a))
{
    t++;
}
}
cout<<t;

return 0;
}