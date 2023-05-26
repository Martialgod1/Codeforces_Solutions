#include<bits/stdc++.h>
using namespace std;
int main()
{

long long s1,s2,s3,s4;
cin>>s1>>s2>>s3>>s4;
int count=0;
long long arr[4]={s1,s2,s3,s4};

sort(arr,arr+4);
for (int i = 0; i < 3; i++)
{
    if (arr[i]==arr[i+1])
    {
        count++;
    }   
}
cout<<count;
return 0;    
}               