#include<bits/stdc++.h>
using namespace std;

int main()
{
long long n;
cin>>n;
map<long long,long long>mm;
for (long long i = 1; i <=n; i++)
{
    long long t;
    cin>>t;
    mm[t]=i;
}
long long m;
cin>>m;
long long p=0,v=0;
for (long long i = 0; i < m; i++)
{
    long long t;
    cin>>t;
    v+=mm[t];
    p=p+n-mm[t]+1;
}
cout<<v<<" "<<p;
return 0;   
}