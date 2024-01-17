#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // precompute the map
    unordered_map<int,int> m;
    for(int i =0;i<n;i++){
        m[arr[i]]++;
    }


    // iterate over the map
    // for(auto mp: m){
    //     cout<<mp.first<<"->"<<mp.second<<endl
    // }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        // cout<<fetch
        cout<<m[number]<<endl;
    }
}