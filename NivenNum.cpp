// writing the code for the Niven number
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ;
    cout<<"Enter the number to check if it is Niven number or not"<<endl;
    cin >> n;
    int temp = n;
    int sum = 0;
    while(temp>0){
        int lastDigit = temp%10;
        sum += lastDigit;
        temp /= 10;

    }
    if(n % sum == 0){
        cout<<"The number is Niven number"<<endl;

    }
    else{
        cout<<"The number is not Niven number"<<endl;
    }
}