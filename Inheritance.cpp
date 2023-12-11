// write an code for inheritance in c++ where object is Dog and class is Animal
// and Dog is inheriting Animal class
// and Dog class has a method called bark() and Animal class has a method called eat()
#include <iostream>
using namespace std;
class Animal{
    public:
     void eat(){
        cout<<"Eating"<<endl;
    }
    
};
class Dog : protected Animal{
    public:    
    
    void bark(){
        cout<<"Barking"<<endl;
    }
    void Eat(){
        eat();
    }
};
int main(){
    Dog d;
    d.Eat(); 
   
    d.bark();
    return 0;
}
