#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
int main(){
    ll n,k,t;
    cin >> n >> k;
    if(n%2==0)
    t=n/2;
    else 
    t=n/2+1;
    
    if(k<=t)
    cout << 2*k - 1;
    else 
    cout << 2*(k-t);
}


