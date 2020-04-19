#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,i;
    cin >> n >> m;
queue <pair<int,int> > q;

for(i=1;i<=n;i++){
    int a;
    cin >> a;
    q.push(make_pair(i,a));
}

 while(q.size() > 1)
    {
        if(q.front().second <= m)
            q.pop();
        else
        {
            q.front().second -= m;
            q.push(q.front());
            q.pop();
        }
    }
cout << q.front().first;
}

    
