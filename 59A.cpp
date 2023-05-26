#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int a,b,k;
k=s.size();
a=0;
b=0;
for (int i = 0; i < k; i++)
{
    if ((int)s[i]>=65 && (int)s[i]<=90 )
    {
        a=a+1;
    }
    else
    {
        b=b+1;
    }  
}
if (a>b)
{
    for (int i = 0; i < k; i++)
    {
        s[i]=toupper(s[i]);
    }  
}
else
{
    for (int i = 0; i < k; i++)
    {
        s[i]=tolower(s[i]);
    }   
}
cout<<s;
return 0;    
}