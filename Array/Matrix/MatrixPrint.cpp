// writing code for the printing array

#include<iostream>
using namespace std;

int main(){
    cout<<"enter the row and coloum"<<endl;
    int n ;
    cin>>n;
    int array[n][n] = {0};

    // write an array
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            array[i][j] = j;
        }
    }
    // print the array
    for(int i =0;i<n;i++){
        cout<<"row "<<i<<": ";
        for(int j =0;j<n;j++){
        cout<<array[i][j]<<" ";
     
        }
        cout<<endl;
    }

}