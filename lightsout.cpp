#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ip[5][5] = {0};
    for(int i = 1; i <= 3; i++)
        for(int j = 1; j <= 3; j++) 
            cin>>ip[i][j];
    for(int i = 1; i <= 3; i++)
    {
        for(int j = 1; j <= 3; j++)
            cout<<(ip[i][j] + ip[i + 1][j] + ip[i - 1][j] + ip[i][j + 1] + ip[i][j - 1] + 1) % 2;
        cout<<'\n'; 
    }
    return 0;
}