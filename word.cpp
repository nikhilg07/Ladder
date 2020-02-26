#include<bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    int count = 0,flag=0;

    for(int i=0;i<str.length();i++){
        if(isupper(str[i]))
        count++;
        else
            flag++;
    }
    if(count>flag){
        transform(str.begin(), str.end(), str.begin(), ::toupper);
        cout << str;
    }
    else{
        transform(str.begin(), str.end(), str.begin(), ::tolower);
        cout << str;
    }
        
    }