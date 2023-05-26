#include<bits/stdc++.h>
using namespace std;

int main()
{
int s,n,x=0;
cin>>s>>n;
pair<int,int>p[1000];
for (int i = 0; i < n; i++)
{
    cin>>p[i].first>>p[i].second;
}
sort(p,p+n);

for (int i = 0; i < n; i++)
{
    if (s<=p[i].first)
    {   
        x++;
        cout<<"NO";
        break;
    }
    else
    {
        s+=p[i].second;
    }    
}
if (x==0)
{
    cout<<"YES";
}

return 0;
}