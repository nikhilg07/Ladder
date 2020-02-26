#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,flag=0,d=0;
    int x[200],y[200],z[200];
    cin >> n;
    if(1<=n && n<=100){
        for(int i =1;i<=n;i++){
            cin >> x[i] >> y[i]>>z[i];
        }
        for(int i=1;i<=n;i++){
            if(-101<x[i]<101 && -101<y[i]<101 && -101<z[i]<101){
                count+=x[i];
                flag+=y[i];
                d+=z[i];

            }
        }
        if(count==0 && flag==0 &&d==0)
                cout << "YES";
                else
                cout << "NO";
    }
}