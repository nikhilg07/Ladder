#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
queue <pair<int,int> > q;

for(i=1;i<=7;i++){
    int a;
    cin >> a;
    q.push(make_pair(i,a));
}

while(n>0){
    n -= q.front().second;
    q.push(q.front());
    q.pop();
}
if(q.front().first == 1)
cout << 7;
else
cout << q.front().first - 1;
}
