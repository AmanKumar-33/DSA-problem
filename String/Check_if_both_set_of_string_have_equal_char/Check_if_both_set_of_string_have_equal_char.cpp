// writing a code for checking the char of the string is equal to the middle

#include <iostream>
#include <string>
using namespace std;
int max_char = 26;

bool CheckCorrectorNot(string s){
    int n = s.length();
    int count1[max_char] = {0};
    int count2[max_char] = {0};

    // if the length of the string is odd or equal to 1
    if(n ==1){
        return true;
    }
    // traversal till the middle of the string
    for(int i =0,j = n-1;i<j;i++,j--){
        // first half
        count1[s[i] -'a']++;
        // secound half
        count2[s[j]-'a']++;
    }
    // checking the count of the char is equal or not
    for(int i =0;i<max_char;i++){
        if(count1[i] != count2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s;
    cout<<"Enter the string"<<endl;
    cin>>s;
    if(CheckCorrectorNot(s)){
        cout<<"Yes"<<endl;

    }
    else{
        cout<<"No"<<endl;
    }
}