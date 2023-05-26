#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
cin>>s;
int k=s.size(),t=0;
for (int i = 0; i < k;)
{
    if (s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
    {
        i+=3;
    }
    else if (s[i]=='1' && s[i+1]=='4')
    {
        i+=2;
    }
    else if (s[i]=='1')
    {
        i++;
    }
    else
    {   
        t++;
        cout<<"NO";
        break;
    }   
}
if (t==0)
{
    cout<<"YES";
}
return 0;
}