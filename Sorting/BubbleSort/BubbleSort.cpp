// writing an code for the bubble sort
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// bubble sort function

// writing the swap function
void swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void BubbleSort(int arr[],int n){
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);

            }

        }

    }
}
// print array function
void printArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<"arr["<<i<<"]"<<" "<<arr[i]<<endl;
    }
}

int main(){
    int n;
    int arr[] = {4,6,8,2,1,9,3,5,7};
    n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    printArray(arr,n);
    return 0;

}