// writing an code for the understanding the concept of the Map in the STL
#include<iostream>
using namespace std;
#include<map>
#include<string>

int main(){
    map<string,int>mp;
    int n;
    cout<<"Enter the number of the elements you want to enter in the map"<<endl;
    cin>>n;
    for(int i =0;i<n;i++){
        string s;
        cin>>s;
        mp[s]++;
    }
    // get an iterator pointer to the map
    map<string,int>::iterator it = mp.begin();
    while(it != mp.end()){
        cout<<"first element: "<<it->first<<",Value: "<<it->second<<endl;
        ++it;
    }
    return 0;
}