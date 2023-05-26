#include<bits/stdc++.h>
using namespace std;

int main()
{
long n;
cin>>n;
long a=0,b=1;
if(n==0)
{
    cout<<"0 0 0";
}
else
{
    while (a+b!=n)
    {
        int c;
        c=b;
        b=a+b;
        a=c;        
    }
    cout<<"0 "<<a<<" "<<b;
}
return 0;
}