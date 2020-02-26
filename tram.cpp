#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> v;
    int n,count=0;
      cin >> n;
    int a[n],b[n];

    for(int i=0;i<n;i++){
    cin >> a[i];
    cin >> b[i];
    count = count+ (b[i]-a[i]);
    v.push_back(count);
}
cout << *max_element(v.begin(),v.end());
}