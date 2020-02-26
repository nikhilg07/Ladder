#include <bits/stdc++.h>
using namespace std;
 
int main(){
    string str;
    int i,j,n,count=0;
    cin>> str;

    map <char,int> h;

    for(int i = 0;i<str.length();i++){
       h[str[i]]++;
    }
    for(auto i=h.begin();i!=h.end();i++){
        
        count++;
    }

   if(count%2 == 0)
   cout << "CHAT WITH HER!";
   else
   cout << "IGNORE HIM!";
}