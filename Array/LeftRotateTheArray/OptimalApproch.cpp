// writing code for the optimal approch of LeftShiftArray
// using same array and O(1) space
// Time Complexity: O(n)
// Space Complexity: O(1)
#include<bits/stdc++.h>
using namespace std;

int LeftRotateTheArray(int arr[],int n){
    int temp = arr[0];
    for(int i =1;i<n;i++){
        arr[i-1] = arr[i];

    }
    arr[n-1] = temp;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    LeftRotateTheArray(arr,n);
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}