// writing code for brute-force approch for the problem on Duplicate number in an array
// Time Complexity: O(n^2)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
int DuplicateNumber(int arr[],int n){
    set<int> s;
    for(int i =0;i<n;i++){
        s.insert(arr[i]);


    }
    int k =0;
    int j =0;
    for(auto i = s.begin();i!= s.end();i++){
        arr[k] = *i;
        k++;
    }
    return k;
}
int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = DuplicateNumber(arr,n);
    for(int i =0;i<k;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}