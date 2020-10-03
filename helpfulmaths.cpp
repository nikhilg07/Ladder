#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();

int main()
{
    fast
    string s;
    cin>>s;
    
    int counter1=0,counter2=0,counter3=0;
    
    for(int i=0;i<s.length();i+=2)
    {
        if(s[i]=='1') counter1++;
        if(s[i]=='2') counter2++;
        if(s[i]=='3') counter3++;
    }
    
    for(int i=0;i<2*counter1;i+=2)
    s[i]='1';
    
    for(int i=2*counter1;i<2*counter1+2*counter2;i+=2)
    s[i]='2';
    
    for(int i=2*counter1+2*counter2;i<s.length();i+=2)
    s[i]='3';
    
    cout<<s;
}
