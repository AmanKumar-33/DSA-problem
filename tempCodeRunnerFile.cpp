// write a code for the single inheritance.
#include<iostream>
using namespace std;
class A
{
    public:
    int a;
    void get_a()
    {
        cout<<"Enter the value of a: ";
        cin>>a;
    }
};
class B: protected A
{
    public:
    int b;
    void get_b()
    {
        cout<<"Enter the value of b: ";
        cin>>b;
    }
};
int main(){
    A a;
    B obj;
    obj.get_a();
    obj.get_b();
    cout<<"The value of a is: "<<obj.a<<endl;
    cout<<"The value of b is: "<<obj.b<<endl;
    return 0;
}