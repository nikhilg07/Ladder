#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i;
    string str[100];

    cin >> n;

    for(i=0;i<n;i++){
        cin >> str[i];
        if(str[i].length()<11)
          cout << str[i]<<endl;
          else{
              cout << str[i][0] + to_string(str[i].length()-2) + str[i][str[i].length()-1]<<endl;
          }

    }

}