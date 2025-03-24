#include <iostream>
using namespace std;


int diagSum1(int matrix[][3],int n){  //time complexity o(n)

    int sum=0;
    for(int i=0;i<n;i++){
        sum += matrix[i][i];
     if(i != n-1-i){
        sum += matrix[i][n-1-i];
    }
}
    return sum;
}

int diagSum(int matrix[][3],int n){  // time complexity O(n *n)
    int sum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                sum += matrix[i][j];
            } else if(j == n-i-1){
                sum += matrix[i][j];
            }
        }
    }
    return sum;
}


int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    cout<<diagSum(matrix,n);
    return 0;
}