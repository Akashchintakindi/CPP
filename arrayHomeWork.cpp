#include <iostream>
using namespace std;

int sum(int num[], int sz){
    int sum=0;
    for(int i=0;i<sz;i++){
        sum = sum + num[i];
    }
    cout<<"The array of sum is "<<sum<<endl;
    return 0;
}

int swapMinMax(int num[],int sz){
    int smallest = 1000;
    int largest = 0;
    for(int i=0;i<sz;i++){
        smallest = min(num[i],smallest);
    }
    for(int i=0;i<sz;i++){
        largest = max(num[i],largest);
    }
    
    cout<<"Smallest is "<<smallest<<endl;
    cout<<"Largest is "<<largest<<endl;
}

int uniqueValue(int num[], int sz){
    int count=0,count1=0;
    for(int i=0;i<sz;i++){
        for(int j=i+1;j<i;j++){
            if(num[i]==num[j]){
                count =i;
            } else {
                count1 = num[i];
            }
        }
    }
    cout<<"Value if i is "<<count<<endl;
    cout<<"Value if i is "<<count1<<endl;

}

int main() {
    int num[] = {1,2,3,1,2,3,4};
    int sz = sizeof(num)/sizeof(int);
    // sum(num,sz);
    // swapMinMax(num,sz);
    uniqueValue(num,sz);
    return 0;
}