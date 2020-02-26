#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> s;
    int n,m;
    cin >> n >> m;
    bool arr[m+1];
    for(int i=0;i<sizeof(arr);i++)
    arr[i]= true;
    for(int p=2;p*p<=m;p++){
        if(arr[p] == true)
            for(int i=p*p;i<=m;i+=p)
            arr[i] = false;  
        }
      if (arr[m]){
          for(int i=2;i<=m;i++){
              if(arr[i])
              s.push(i);
          }
          s.pop();
   int x = s.top();
   if(x == n)
   cout << "YES";
   else
   cout<< "NO";
      }
      else
      cout << "NO";

}


