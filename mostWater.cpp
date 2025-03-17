#include <iostream>
using namespace std;

int mostWater(int water[], int len){
    int maxWater=0;;
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            int w = j-i;
            int ht = min(water[i],water[j]);
            int area = w * ht;
            maxWater = max(maxWater,area);
        }
    }
    return maxWater;
}

int main(){
    int water[] = {1,8,6,2,5,4,8,3,7};
    int len = sizeof(water)/ sizeof(int);
    cout<<mostWater(water,len);
    return 0; 
}