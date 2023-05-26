#include <bits/stdc++.h>
using namespace std;

int main()
{
string s1,s2;
cin>>s1;
cin>>s2;
long long k=s1.size();
long long arr[k];
for (int i = 0; i < k; i++)
{
    if (s1[i]==s2[i])
    {
        arr[i]=0;
    }
    else
    {
        arr[i]=1;
    } 
    cout<<arr[i];
}

return 0;    
}