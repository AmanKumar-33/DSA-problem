// writing an code for finding the majority element in an array

#include <bits/stdc++.h>
#include <vector>
using namespace std;

int majorityElement(vector<int>& nums){
    int count = 0;
    int element = 0;
    for(int num : nums){
        if(count == 0){
            element = num;

        }
        if(num == element){
            count++;
        }
        else{
            count--;
        }
    }
    return element;
}
int main(){
    vector<int>nums = {3,2,3,3,5,6,3,3,3,3,5,5,5,5,5,1};
    cout<<majorityElement(nums);
}