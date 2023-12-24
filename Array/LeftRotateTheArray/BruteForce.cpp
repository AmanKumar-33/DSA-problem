// writing the code for the LeftRotateTheArray function
// Time Complexity: O(n)

#include<bits/stdc++.h>
using namespace std;
int LeftRotateTheArray(int arr[],int n){
    int temp[n];
    for(int i =1;i<n;i++){
        temp[i-1] = arr[i];

    }
    temp[n-1] = arr[0];
}
int main(){
    int n =5;
    // cout<<"Enter the size of the array"<<endl;
    // cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<endl;

    // for(int i =0;i<n;i++){
    //     cin>>arr[i];
    // }
     int arr[]= {1,2,3,4,5};
    LeftRotateTheArray(arr,n);
    cout<<"The array after left rotation is"<<endl;

    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}