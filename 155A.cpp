#include<bits/stdc++.h>
using namespace  std;

int main()
{
int n,t,x,y;
cin>>n;
int arr[n];
t=0;

for (int i = 0; i < n; i++)
{
    cin>>arr[i];   
}
x=arr[0];
y=arr[0];
for (int j = 1; j < n; j++)
{   
if (arr[j]>x)
{
    t++;
    x=max(arr[j],x);
}
else if (arr[j]<y)
{
    t++;
    y=min(arr[j],y);
}
}
cout<<t;

return 0;    
}