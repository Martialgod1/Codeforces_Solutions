#include <bits/stdc++.h>
using namespace std;

int main()
{int mata[5][5];
int a;
 for (int i = 0; i < 5; i++)
 {
    for (int j = 0; j < 5; j++)
    {
        cin>>mata[i][j];
        if (mata[i][j]==1)
        {
            a=abs(i-2)+abs(j-2);
        }
    }
 }
 cout<<a;
 
 return 0;
}