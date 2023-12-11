#include <bits/stdc++.h>
using namespace std;

 vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m){
    int row[n];
    int col[m];
    //traverse them matrix and store the row and column index with value 0
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;

            }
        }
    }
    //finally mark all the element mark where col or row is 1
    //traverse the matrix again and using the row and col array mark the element 0
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>>ans = zeroMatrix(matrix,n,m);
    cout<<"The matrix after setting the zeroes is"<<endl;
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}