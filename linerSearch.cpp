#include <iostream>
using namespace std;
int linerSearch(int num[],int sz, int target) {
    for(int i=0;i<sz;i++){
        if(target == num[i]){
            return i;
            
        }
    
    }
    return -1;
}

int reverseArray(int num[], int sz){
    for(int i = sz-1;i>=0;i--){
        cout<<num[i]<<" ";
    }
    return 0;
}
int main(){
    int num[] = {4,2,7,8,1,2,5};
    int target=80,index;
    int sz = sizeof(num)/sizeof(int);
    int n=linerSearch(num,sz,target);
    cout<<"Element found at index "<<n<<endl;
    reverseArray(num,sz);
    return 0;
}