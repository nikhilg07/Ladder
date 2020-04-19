#include <iostream>
using namespace std;

int main(){
    int m;
    cin >> m;
    bool arr[m];
    memset(arr,true,sizeof(arr));
    for(int p=2;p*p<=m;p++){
        if(arr[p]==true){
            for(int i=p*p;i<=m;i+=p)
            arr[i] = false;  
        } 
    }
        for(int p=2;p<=m;p++)
        if(arr[p])
          cout<< p;
    }