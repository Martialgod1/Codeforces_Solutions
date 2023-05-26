#include <bits/stdc++.h>
using namespace std;
 
int main(){

int n;
cin>>n;
vector<int>vec;
int x=0;
for (int i = 0; i < 7; i++)
{
    int t;
    cin>>t;
    vec.push_back(t);
    x+=t;
}    
int t = vec[0];
int i=0;
while (t < n)
{
    i++;
    i %= 7;
    t += vec[i];
}

cout << i + 1;

return 0;
}