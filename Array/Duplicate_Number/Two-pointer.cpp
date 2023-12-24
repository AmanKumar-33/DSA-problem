// // writing the code for Dupliacte number using two pointer approch
// // time complexity is O(n) and space complexity is O(1)

#include <bits/stdc++.h>
using namespace std;

// // int DuplicateNumber(int arr[],int n){
// //     int slow = arr[0];
// //     int fast = arr[0];
// //     do{
// //         slow = arr[slow];
// //         fast = arr[arr[fast]];
// //     }while(slow!=fast);
// //     fast = arr[0];
// //     while(slow!=fast){
// //         slow = arr[slow];
// //         fast = arr[fast];
// //     }
// //     return slow;
// // }
int removeDuplicates(int arr[],int n){
    int i =0;
    for(int j =1;j<n;j++){
        if(arr[i] != arr[j]){
            i++;
            arr[i] = arr[j];
        }
    }
    return i+1;
}
// int main(){
//     int arr[] = {1,2,3,4,5,6,7,8,9,1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = DuplicateNumber(arr,n);
    
//     // cout<<k<<endl;
//     for(int i =0;i<k;i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }

// #include<bits/stdc++.h>

// using namespace std;
// int removeDuplicates(int arr[], int n)
// {
//   int i = 0;
//   for (int j = 1; j < n; j++) {
//     if (arr[i] != arr[j]) {
//       i++;
//       arr[i] = arr[j];
//     }
//   }
//   return i + 1;
// }
int main() {
  int arr[] = {1,1,2,2,2,3,3};
  int n = sizeof(arr)/sizeof(arr[0]);
  int k = removeDuplicates(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }
}
