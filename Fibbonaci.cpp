// writing the code for the Fibonacci series
#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    return fib(n-1) +fib(n-2);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    fib(n);
}
