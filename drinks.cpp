#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    double percentage;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        sum+=arr[i];
    }
    percentage =(double) sum/n;
    cout<< percentage;
}