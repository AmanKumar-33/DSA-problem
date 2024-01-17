// writing th e code for the Integer in map

#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
map<int,int>mp;
for(int i =0;i<n;i++){
    int x;
    cin>>x;
    mp[x]++;
}
map<int,int>::iterator it = mp.begin();
while(it!=mp.end()){
    cout<<it->first<<"->"<<it->second<<endl;
    ++it;
    cout<<sizeof(it)<<endl;
}
}
