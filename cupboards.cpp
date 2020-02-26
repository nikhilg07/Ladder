#include<bits/stdc++.h>
using namespace std;

int main(){
    int d,left=0,right=0;
    cin >> d;
    int arr[d];
    int arr2[d];
    for(int i=0;i<d;i++){
      cin >> arr[i];
      cin >> arr2[i];
      if(arr[i] == 1)
      left++;
      if(arr2[i] == 1)
      right++;
    }
    cout << min(left,d-left)+min(right,d-right);
}