#include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<vector<int>>zeromtrix(vector<vector<int>>&matrix,int n,int m){
    int row[n] = {0};
    int col[m] = {0};

    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;

            }
        }
    }
    for(int i =0;i<n;i++){
        for(int j =0;j<m;j++){
            if(row[i]==1 ||col[j] == 1){
                matrix[i][j] =0;
            }
        }
    }
    return matrix;
}

int min(){
    vector<vector<int>>matrix = {{2,0,3,4},{5,6,7,8},{9,0,23,45}};
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans =zeromtrix(matrix, n, m);
        // vector<int>ns = (matrix,n,m);
        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                cout<<matrix[i][j]<<" ";
            }
            cout<<endl;
        }
    return 0;
}