
#include <iostream>
using namespace std;

int main() {
    cout<<"enter first number"<<endl;
    int a;  cin>>a;
    cout<<"enter second number"<<endl;
    int b;  cin>>b;
    a = a^b;
    b = b^a;
    a = a^b;
    cout<<""<<a<<" "<<b<<endl;




    return 0;
}