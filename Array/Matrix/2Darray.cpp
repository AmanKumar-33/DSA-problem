// writing an code where user gives an input and the code will print the number of digits in the given input

#include<iostream>
using namespace std;

int main(){
    int arr[2][2];
    cout<<" 2D array input: "<<endl;
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cout<<"Enter the values of the array["<<i<<"]["<<j<<"] = ";
            cin>>arr[i][j];
        }
    }
    cout<<"\n2D array output: \n";
    for(int i =0;i<2;i++){
        for(int j =0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}