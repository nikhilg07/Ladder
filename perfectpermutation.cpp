#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n%2==0){
        int i =2;
        while(i<=n){
            cout << i << "\t";
            cout << i-1 << "\t";
            i=i+2;
        }
    }
    else
    {
        cout << -1;
    }
    
}