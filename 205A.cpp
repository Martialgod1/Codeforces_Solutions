#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, ans(1000000001), ind(0), t(1);
    cin>>n;
    for (int i = 1; i <= n; ++i)
    {
        cin>>x;
        if (x < ans)
        {
            ans = x;
            ind = i;
            t = 1;
        }
        else if (x == ans)
        {
            t += 1;
        }
    }
    if (t == 1)
    {
        printf("%d\n", ind);
    }
    else
    {
        printf("Still Rozdil\n");
    }
    return 0;
}
