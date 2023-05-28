#include<bits/stdc++.h>
using namespace std;

int main()
{
string s;
cin>>s;
int t=0;    
for (int i = 0; i < 1000; i++)
{   
    int k=s.size();
    if (s[k-1]=='B'&& s[k-2]=='U'&&s[k-3]=='W')
    {
        s.pop_back();
        s.pop_back();
        s.pop_back();
    }
    else
    {
        break;
    }  

}

for (int i = 0; i < s.size();)
{       
    if (t!=0 && s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        cout<<" ";
        t=0;
        i+=3;
    }
    
    if (s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B')
    {
        i+=3;
    }
    else
    {
        cout<<s[i];
        t++;
        i++;
    }
}

return 0;
}
