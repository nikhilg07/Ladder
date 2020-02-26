#include<bits/stdc++.h>
using namespace std;

int main(){
    int year,i,a,b,c,d;
    cin >> year;
    if(year>=1000 && year<=9000){
        for(i=year+1;i<10000;i++){
            a = i/1000;
            b = i/100 %10;
            c = i/10 %10;
            d = i %10;

            if (a != b && a != c && a != d && b != c && b != d && c != d) {
            break;
        }
            }
            cout << i;
        }
    }