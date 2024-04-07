#include<iostream>
using namespace std;

int collatz(int n ){
    // base condition
    if(n ==1){
        return 1;

    }
    if(n%2 == 0){
        return 1 + collatz(n/2);
    }
    else{
        return 1 + collatz(3*n+1);
    }
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<collatz(n);
}