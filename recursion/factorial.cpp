#include <iostream>
using namespace std;

int factorial(int n){
    if(n==1){
        return 1;
    }
    // cout<< n<<" ";
   return n + factorial(n-1);
}

int main(){
    cout<<factorial(4)<<" ";
    return 0;
}