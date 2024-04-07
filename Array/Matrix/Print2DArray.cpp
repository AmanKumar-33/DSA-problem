// writing an code for the printing of 2 D array
#include <iostream>
using namespace std;

int main(){
    int arr[4][2] = {
        {123,23},
        {143,45},
        {153,65},
        {163,75},
    };

    // int i = 0,j=0;
    cout<<"printing an 2d array"<<endl;
    for(int i=0;i<4;i++){
        for(int j =0;j<2;j++){
            cout<<"\t"<<arr[i][j];
        }
        cout<<endl;
    }
}