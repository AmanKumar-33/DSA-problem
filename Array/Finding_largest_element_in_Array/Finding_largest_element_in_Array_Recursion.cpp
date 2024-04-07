// writing the code for the finding the largest number using recursion

#include<iostream>
using namespace std;

int largestNum(int arr[],int n, int i){
    // Last index return element
    if(i ==n-1){
        return arr[i];
    }
    // find the maximum from res
    int recMax = largestNum(arr,n, i+1);
    // comapare with i th element and return
    return max(recMax,arr[i]);
}

int main(){
    int arr[] = { 34,45,12,34,65,21};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"LargestNum -> "<<largestNum(arr,n,0);
    return 0;
    
}