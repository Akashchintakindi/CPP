#include <iostream>

using namespace std;

bool linerTwoDArray(int matrix[][3],int rows,int col,int key){ // here we must specify the no.of cols
    for(int i=0;i<rows;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};// 2D Arrays 
    int rows = 4; // we must declare no.of rows and col if we are using 2D Array
    int col = 3;int tar=8;
    cout<<linerTwoDArray(matrix,rows,col,tar);
    return 0;
}