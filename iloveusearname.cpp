#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0,flag=0;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>> arr[i];

    int max=arr[0];
    int min=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            count++;
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i]<min){
            flag++;
            min = arr[i];
        }
    }
    cout << count+flag;
}