#include<bits/stdc++.h>
using namespace std;
int MissingNum(vector<int>& arr,int n){
    for(int i =0;i<n;i++){
        int flag = 0;
        for(int j =0;j<n;j++){
            if(arr[i] == arr[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            return arr[i];

        }

        }
    }


    
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        arr[i] = i;
    }
    int ans = MissingNum(arr,n);
    cout<<ans<<endl;
    return 0;
}