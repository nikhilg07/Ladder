#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue <char> q;
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i=0;i<str.length();i++){
        if(str[i] == str[i+1])
        continue;
        else
        {
            q.push(str[i]);
        }
    }
    int x = str.length() - q.size();
    cout << x;
}