#include <bits/stdc++.h>
using namespace std;
 
int main(){
  int count =0;
  string str1,str2,str3;
  cin >> str1 >> str2>>str3;
  str1.append(str2);
  map <char,int> m1;
  map <char,int> m2;

  for(int i = 0;i<str1.length();i++){
       m1[str1[i]]++;
    }
    for(int i = 0;i<str3.length();i++){
       m2[str3[i]]++;
    }
    auto it1=m1.begin();
    auto it2=m2.begin();
    for(it1= m1.begin(), it2 = m2.begin();it1 != m1.end(),it2!=m2.end();it1++,it2++)
    if(it1->first == it2->first && it2->second == it1->second)
    count++;

    if(count == m2.size() && count == m1.size())
    cout << "YES";
    else
    cout << "NO";
}