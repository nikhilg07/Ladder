#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[4],i,j,count=0;
    for(int i=0;i<4;i++)
    cin >> arr[i];

    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(arr[i] == arr[j] && arr[j]!=0){
               count++;
               arr[j]=0;
            }
        }
    }
    cout << count;
}