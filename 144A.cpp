#include <bits/stdc++.h>
using namespace std;

int main()
{
int n, a,b,x,y;
cin >> n;
x=0;
y=0;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
a=arr[0];
b=arr[0];
for (int i = 0; i < n; i++)
{
    b=min(arr[i],b);
    a=max(arr[i],a);
}

for (int i = 0; i < n; i++)
{
    if (arr[i]==a)
    {
        x=i;
        break;
    }   
}
for (int i = 0; i < n; i++)
{
    if (arr[i]==b)
    {
        y=i;
    }   
}
if (x<y)
{
    cout<<x+n-1-y;
}
else
{
    cout<<x+n-2-y;
}

return 0;
}