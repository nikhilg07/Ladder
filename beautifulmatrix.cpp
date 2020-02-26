#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[6][6];
    int x,y,count;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin >> a[i][j];
        }
    }

    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            if(a[i][j] == 1){
               x=abs(3-i);
               y=abs(3-j);
            }
        }

    }

    count = x+y;
    cout << count;
}