#include <iostream>
#include <iomanip>
using namespace std;

float bisection(int a, int b, int c, float x1, float x2){
    float d = (x1+x2)/2;
    if(x2-x1 < 0.00001){
        return d;
    }
    else{
    if(a*d*d+b*d+c >0){
       return bisection(a,b,c,x1,d);
    }
    else if(a*d*d+b*d+c <0){
      return bisection(a,b,c,d,x2);
    }
    }

}
 
 int main(){
     int a,b,c;
     float x1,x2;
     cout << "Enter coefficients a,b,c";
     cin >> a >> b >> c;
     cout << "Enter interval";
     cin >> x1 >> x2;

     float answer = bisection(a,b,c,x1,x2);
     cout <<fixed<<setprecision(2)<<answer;
     return 0; 

 }