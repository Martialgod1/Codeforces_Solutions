#include <bits/stdc++.h>

using namespace std;

int main()
{
string s;
s="tour";
int size;
char replacement = '.';
size= s.size();
for (int i = 0; i < size; i++)
{
    if (s[i]='A'||'E'||'I'||'O'||'U'||'a'||'e'||'i'||'o'||'u')
    {
        s[i] =replacement;
    }     
}

cout<<s;

return 0;
}