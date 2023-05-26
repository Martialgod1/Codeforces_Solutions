#include <bits/stdc++.h>
using namespace std;

int main()
{
int n,t,k;
cin>>n>>t;
string s;
cin>>s;
k=s.size();

while (t--)
{
    for (int i = 1; i < n; ++i)
    {
        if (s[i] == 'G' && s[i-1] == 'B')
        {
            s[i] = 'B';
            s[i-1] = 'G';
            ++i;
        }
    }
}
    

    


cout<<s;

return 0;    
}