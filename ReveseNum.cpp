// writing the code for the Reverse a given Array problem
// using the concept of pointers
#include<iostream>
using namespace std;

void PrintArray(int arr[],int n){
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void revereArray(int arr[],int n){
    int *start = arr;
    int *end = arr+n-1;
      // this is the method of reversing the array using the pointers
    while(start<end){
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
    PrintArray(arr,n);

}







int main(){
    int n ;
    cout<<"enter the given integer array size"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter the array elements"<<endl;
    cin>>arr[n];
    revereArray(arr,n);


}
