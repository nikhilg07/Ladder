#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, t;
    string s;
    cin >> n >> t >> s;
    while (t-- >0)
    {
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                i++;
            }
        }
    }
    cout << s << endl;
    return 0;
}



// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,t;
//     cin >> n;
//     char str[50];
    
//     cin >> t;
//     if(n>=1 && t<=50){
//         for(int i =1;i<=n; i++){
//         cin >> str[i];
//     }
//     for(int i=1;i<=n;i++){
//         if(str[i] == 'B'){
//             int j =i;
//             while(j<=t+i-2){
//                 str[j]=str[j+1];
//                 j++;
//             }
//           str[j] = 'B';
            
//         }
//     }
//     }
//     for(int i =1;i<=n; i++){
//         cout << str[i];
//     }
// }
