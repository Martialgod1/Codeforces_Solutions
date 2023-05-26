#include <bits/stdc++.h>

using namespace std;

int main()
{
int x,n;
string t;
cin>>n;
x=0;
for (int i = 0; i < n; i++)
{  cin>>t;
   if (t=="++X" || t=="X++")
   {
    x=x+1;
   }
   
    else if (t=="X--"||t=="--X")
    {
    x=x-1;
    }
    continue;
}
cout<<x;
return 0;
}