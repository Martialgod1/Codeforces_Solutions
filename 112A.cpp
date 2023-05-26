#include <bits/stdc++.h>
using namespace std;
 
int cmp(char *s1,char *s2){
    for(int i=0;i<strlen(s1);i++){
        s1[i]=tolower(s1[i]);
        s2[i]=tolower(s2[i]);
        if(s1[i]<s2[i])
        {
            return -1;
        }
        else if(s1[i]>s2[i])
        {
            return 1;
        }
    }
    return 0;
}
 
int main(){
    char s1[1000],s2[1000];
    cin>>s1>>s2;
    cout<<cmp(s1,s2);
    return 0;
}