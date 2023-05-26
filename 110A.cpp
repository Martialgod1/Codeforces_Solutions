#include <bits/stdc++.h>
using namespace std;

int main()
{
long long x,y,k;
cin>>x;
string s = to_string(x);
k=s.size();
y=0;
for (int i = 0; i < k; i++)
{   
    if (s[i]=='4'||s[i]=='7')
    {
        y=y+1;
    }    
}

if(y==7||y==4)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
}

return 0;    
}
