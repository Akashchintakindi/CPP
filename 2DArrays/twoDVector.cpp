#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector <int>> mt = {{1,2,3},{4,5,6},{7,8,9}};

    //rows = mat.size();
    //cols = mat[i].size();

    for(int i=0;i<mt.size();i++){
        for(int j=0;j<mt[i].size();j++){
            cout<<mt[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}