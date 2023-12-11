// writing the code for the Sum of the first n natural numbers
// using recursion

#include <iostream>
using namespace std;
// Parametrized Way

void fun(i,sum){
    if(i<1){
        return sum;
    }
    else{
        return fun(i-1,sum+i);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<fun(n,0);
    return 0;
}