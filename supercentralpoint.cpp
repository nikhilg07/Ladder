#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,flag=0;
    cin >> n;
vector <pair<int,int> > q;

  for(i=0;i<n;i++){
    int a,b;
    cin >> a >>b;
    q.push_back(make_pair(a,b));
}
for(i=0;i<q.size();i++){
    int left=0,right=0,upper=0,lower=0;
    for(j=0;j<q.size();j++){
        if(q[i].first >q[j].first && q[i].second  == q[j].second)
        left++;
        if(q[i].first <q[j].first && q[i].second  == q[j].second)
        right++;
        if(q[i].first == q[j].first && q[i].second > q[j].second)
        lower++;
        if(q[i].first == q[j].first && q[i].second  < q[j].second)
        upper++;
    }
    if(left>0 && right>0 && upper>0 && lower>0)
    flag++;
}
cout << flag;
}