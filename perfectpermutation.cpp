#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,j=2;
    cin >> n;
    if(n%2==0){
        for(int i=1;i<n;i+2){
            cout << j;
            cout << i;
            j+2;
        }
    }
    else
    {
        cout << -1;
    }
    
}