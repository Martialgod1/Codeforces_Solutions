#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
if (n%2!=0)
{
    cout<<"-1";
}
else
{
    for (int i = 0; i < n; i++)
    {
        if (i%2==0)
        {
            arr[i]=i+2;
        }
        else
        {
            arr[i]=i;
        }    
        cout<<arr[i]<<" ";    
    }    
}

return 0;    
}