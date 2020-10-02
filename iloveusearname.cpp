#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
 
int main()
{
    fast
    int n,counter1,counter2,ans=0;
    cin>>n;
    int ar[n];
    
    for(int i=0;i<n;i++)
    cin>>ar[i];
    
    for(int i=1;i<n;i++)
    {
        counter1=0,counter2=0;
        for(int j=0;j<i;j++)
        {
            if(ar[i]>ar[j])
            counter1++;
            if(ar[i]<ar[j])
            counter2++;
            if((counter1==i)||(counter2==i))
            ans++;
        }
    
    }
    
cout<<ans;
    
}
