#include<iostream>
using namespace std;

int main() {
    int num = 1234,rev=0,ans=0,sum=0;
    while(num!=0){
        rev = num % 10;
        ans = ans * 10 + rev;
        num /=10;
        
    }
    cout<<ans<<endl;
    
    return 0;
}