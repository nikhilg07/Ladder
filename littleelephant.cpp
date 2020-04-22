#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    int arr[n],arr1[n];
    for(i=0;i<n;i++)
    cin >> arr[i];

    copy(arr,arr+n,arr1);
    sort(arr,arr+n);
    if(arr[0] == arr[1])
    cout << "Still Rozdil";
    else{
        for(i=0;i<n;i++){
            if(arr[0] == arr1[i])
            cout << i+1;
        }
    }
}