// writing the code for finding the consecutive numbers in an array where the sub array has maximum value
#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int findMaxSum(int arr[],int n, int k){
    int maxsum = INT_MIN;
    for(int i =0;i<n-k;i++){
        int currsum = 0;
        for(int j =0;j<k;j++){
            currsum = maxsum + arr[i+j];
        }
        maxsum = max(currsum,maxsum);
    }
    return maxsum;}
// int main(){
//     int arr = [1,2,3,45,6,7,8,9];
//     int n = 8;
//     int k =2;
//     std::cout<<findMaxSum(arr,n,k) << endl;
//     return 0;
    

// }
int main()
{
    int arr[] = {1, 7, 6, 2, 3, 4, 5};
    int n = 7;
    int k = 2;
    cout<<findMaxSum(arr,n,k) << endl;
    return 0;
}