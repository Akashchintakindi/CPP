#include <iostream>
#include <limits>
using namespace std;

double myPow(double x ,int n){
    long binform = n;
   
    if(n<0){
        x = 1/x;
        binform = -binform;
    }
    double ans = 1;
    while (binform>0){
        if(binform%2 == 1){
            ans *= x;

        }
        x *=x;
        binform/=2;
    }
    return ans;
    
}




int main() {
    double x=-2;int n=3;
    double ans = myPow(x,n);
    cout<<ans;

    return 0;
}