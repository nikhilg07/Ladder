#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k, l, c, d, p, nl, np;

    cin >> n >> k >>l>> c>> d>> p>> nl>> np;

    int drinks = floor((k*l)/nl);
    int slices = c*d;
    int salt = p/np;
   int minimum = min(drinks,slices);
   int min1 =  min(minimum,salt)/n;

   cout << min1;

}