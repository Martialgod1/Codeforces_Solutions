#include<bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
cin>>s1>>s2;
int k=s2.size(),t=0;
for (int i = 0; i < k; i++)
{
    if(s1[i]==s2[k-i-1])
    {
        t++;
    }
    else
    {   
        t=0;
        cout<<"NO";
        break;
    }
}
if (t!=0)
{
    cout<<"YES";
}
return 0;
}