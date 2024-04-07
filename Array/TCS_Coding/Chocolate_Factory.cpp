// writing an code for finding the enpty packets in the given set of 
// N = 8;
// arr=[4,5,0,1,9,0,5,0]
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int chocolateFactory(int arr,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            arr[count] = arr[i];
            count++;
        }
    
    }
    // putting the value of 0 where arr.value is non integer
    for(int i = count;i<n;i++){
        arr[i] = 0;
    }

}
int main(){
    int n;
    cin>>n;
    int arr[n] = {};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Arr is: "<<chocolateFactory(arr,n);
}
