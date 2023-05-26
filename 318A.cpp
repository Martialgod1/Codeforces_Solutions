#include<bits/stdc++.h>
using namespace std;
int main()
{
long long n,k,t;
cin>>n>>k;

if(n%2==0)
{
    if (k <= n / 2)
	{
	    t = 2 * k - 1;
	    cout << t << endl;
	}
	else 
	{
        t = 2 * (k - n / 2); 
	    cout << t << endl; 
	}
}
else
{
    if (k <= n / 2+1)
    {
        t = 2 * k - 1;
	    cout << t << endl;
    }
    else
    {
        t = 2 * (k - n / 2-1);
	    cout << t << endl;
    }
}    
return 0;    
}