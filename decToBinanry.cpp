#include<iostream>
using namespace std;

int decToBinary(int decNum){
    int ans=0,pow=1;
    while(decNum>0){
        int rem = decNum % 2;  
        decNum /=2;

        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int BinToDecimal(int binNum){
    int ans=0,pow=1;
    while(binNum>0){
    int rem = binNum % 10;
    ans += rem * pow;

    binNum /= 10;
    pow *=2;
    }
    return ans;
}

int main(){
    int decNum=50;
    int binNum=101010;
    cout<<"The decimal of "<<decNum<<" is "<<decToBinary(decNum)<<endl;
    cout<<"The binary of "<<binNum<<" is "<<BinToDecimal(binNum);
    return 0;
}