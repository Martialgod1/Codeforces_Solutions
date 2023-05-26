#include <bits/stdc++.h>

using namespace std;

int main()
{
int n,k;  
cin>>n;
for (int i = 0; i < n; i++)
{   
    string s;
    cin>>s;
    k=s.size();
   if (k>10)
   {
     cout<<s[0]<<k-2<<s[k-1]<<endl;
   }
   else
   {
    cout<<s<<endl;
   }    
}

return 0;    
}
