#include<bits/stdc++.h>
#define ull unsigned long long int
using namespace std;
int main()
{
    int n; cin>>n; cin.ignore(1, '\n');
    int a[n + 1] = {0}, t[n + 1] = {0};
    //Arr t is to store positions of arr a.
    for(int i = 1; i <= n; i++)
        cin>>a[i], t[a[i]] = i;
    int q, b = 0; cin>>q;
    ull v = 0, p = 0;
    for(int i = 1; i <= q; i++)
    {
        cin>>b;
        v += t[b];
        p += n - t[b] + 1;
    }
    cout<<v<<' '<<p<<'\n';
}