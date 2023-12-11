#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
// typecasting is the process of converting one data type to another data type
// there are two type of typecasting 
// 1. implicit typecasting
// 2. explicit typecasting

// implicit typecasting
// in this type of typecasting the compiler automatically converts the data type
int main(){
    int  a =15,b =2;
    float idiv;
    // here the compiler automatically converts the int data type to float data type
    idiv = a/b;
    printf("the result of implict type casting is %f\n",idiv);
    



// explicit typecasting
// in this type of typecasting the user explicitly converts the data type
char x = 'a';
double ediv ;
ediv = (double)a / b;
x = x+3;
printf("the result of  explict type casting is %f\n",ediv);
return 0;
}
