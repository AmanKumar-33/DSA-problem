#include<iostream>
using namespace std;

int largestNum(int arr[], int n){
    int i;
    int max = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main(){
    int arr[] = { 5,23,45,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"largestNum -> "<<largestNum(arr,n)<<endl;
    return 0;
}

