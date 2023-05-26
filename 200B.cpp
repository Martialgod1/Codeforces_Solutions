#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
cin>>n;
double arr[n];
double t;
t=0;
unsigned desiredPrecision = 10;

for (int i = 0; i < n; i++)
{
    cin>>arr[i]; 
    t=t+(arr[i]/n);
}
cout<<setprecision(14)<<t;
return 0;    
}