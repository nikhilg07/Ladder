#include<bits/stdc++.h>
using namespace std;
int main(){
    int a1,a2,a3;
    cin >> a1 >> a2 >> a3;

    double s1 = sqrt(a2*a3/a1);
    double s2 = sqrt(a3*a1/a2);
    double s3 = sqrt(a1*a2/a3);

    double sum = 4*(s1+s2+s3);

    cout << sum;
}
