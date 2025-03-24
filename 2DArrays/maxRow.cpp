#include <iostream>
using namespace std;


int maxRowSum(int matrix[][3],int rows,int col){
    int maxrow=0;
    for(int j=0;j<col;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
                sum += matrix[i][j]; 
        }
        maxrow = max(maxrow,sum);
    }
    return maxrow;
}

int main(){
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};// 2D Arrays 
    int rows = 4; // we must declare no.of rows and col if we are using 2D Array
    int col = 3;
    cout<<maxRowSum(matrix,rows,col);
}