#include <bits/stdc++.h>
using namespace std;

long long arr[3];

long long vec(long long x,long long y,long long z)
{   cin>>x>>y>>z;
    arr[0]+=x;
    arr[1]+=y;
    arr[2]+=z;
    return 0; 
}    

int main()
{   int n;
    long long x,y,z;
    cin>>n;
      
    for (int i = 0; i < n; i++)
    {  
        vec(x,y,z);
    }
    
    if(arr[0]==0&&arr[1]==0&&arr[2]==0)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
        
    return 0;
}