#include<iostream>
using namespace std;

int main() {
    
    int n=4;
    for(int i=0;i<n;i++){
        //stars 
        for(int j=0;j<=i;j++){
            cout<<" *";
        }
        //spaces
        for(int j=0; j<=n-1-i;j++){
            cout<<"@";
        }
        for(int j=0;j<i;j++){
            cout<<"*";
        }
        
        cout << endl;
    }
        
}