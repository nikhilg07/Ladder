#include<bits/stdc++.h>
using namespace std;
int main(){
    string n,m;
    cin >> n;
    cin >> m;
    

     for(int i=0;i<n.length();i++){
         if(n[i] != m[i])
        cout << 1;
        else
        cout<< 0; 
    }
}