#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec= {10,20};

    vec.push_back(25);
    vec.push_back(1);
    for(int val : vec){
        cout<<val<<" ";
    }
    vec.push_back(34);
    vec.push_back(10);
    cout<<"Size of vector is "<<vec.size()<<endl;
    cout<<"Capacity of vector is "<<vec.capacity()<<endl;
    
    return 0;
}