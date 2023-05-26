#include<bits/stdc++.h> 
using namespace std; 
int main()
{
string str1,str2,str3,str;
cin>>str1>>str2>>str3;    
str=str1+str2;        
sort(str.begin(), str.end());
sort(str3.begin(), str3.end());
if(str == str3)
{
    cout<<"YES";
}
else
{
    cout<<"NO";
} 

return 0;
}