#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,min,pos1,pos2;
    cin >> n;
vector <pair<int,int> > q;

for(i=1;i<=n;i++){
    int a;
    cin >> a;
    q.push_back(make_pair(i,a));
}

min = 999;
for(i=0;i<q.size();i++){
        if(abs(q[i].second - q[i+1].second) < min && i!=q.size()-1)
        min = abs(q[i].second - q[i+1].second),pos1=i+1,pos2=i+2;
        else if(abs(q[i].second - q[0].second) < min && i==q.size()-1)
        pos1=1,pos2=i+1;
    }

cout << pos1 << "\t" << pos2;
}