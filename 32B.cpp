#include <bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int k;
k=s.size();
for (int i = 0; i < k;)
{
    if (s[i]=='-'&&s[i+1]=='-')
    {
        cout<<2;
        i=i+2;
    }
    else if (s[i]=='-'&&s[i+1]=='.')
    {
        cout<<1;
        i=i+2;
    }
    else if (s[i]=='.')
    {
        cout<<0;
        i++;
    } 
}

return 0;    
}