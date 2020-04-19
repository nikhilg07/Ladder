#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    ll n,k;
    cin >> n >> k;
    vector <ll> v;
    for(int i=1;i<=n;i++){
        if(i%2 != 0)
        v.push_back(i);
    }

    for(int i=1;i<=n;i++){
        if(i%2 == 0)
        v.push_back(i);
    }

    cout << v[k-1];
}


