#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

int x=0,y=0;
for (int i = 0; i < n; i++)
{
int t;
cin>>t;
if (t==5)
{
    x++;
}
else
{
    y++;
}
}
int t=floor(x/9);
if (y==0||t==0&&y==0)
{
    cout<<"-1";
}
else if (t==0&&y!=0)
{
    cout<<"0";
}
else
{
    for (int i = 0; i < (9*t); i++)
    {
        cout<<"5";
    }
    for (int i = 0; i < y; i++)
    {
        cout<<"0";
    }   
}

return 0;
}