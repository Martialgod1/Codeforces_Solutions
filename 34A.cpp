#include<bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;

vector<int>vec;
int min1=INT_MAX;
int x;
pair<int,int>pair1;
for (int i = 0; i <n ; i++)
{
    int t;
    cin>>t;
    vec.push_back(t);
    if (i>=1)
    {
        x=abs(vec[i]-vec[i-1]);
        if (min1>x)
        {   
            min1=x;
            pair1.first=i+1;
            pair1.second=i;
        }        
    }
}
if (abs(vec[n-1]-vec[0])<=min1)
{
    cout<<"1 "<<n;
}
else
{
    cout<<pair1.first<<" "<<pair1.second;
}

return 0;
}