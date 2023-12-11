// Armstrong number is summation of cubes of its digits is equal to the number itself
// 153 = 1^3 + 5^3 + 3^3
// 153 = 1 + 125 + 27
// 153 = 153
#include <cmath>
#include <iostream>
using namespace std;
bool ArmstrongNum(int n){
    int sum = 0;
    int originalNum = n;
    int count = 0;

    while(n>0){
        n = n/10;
        count++;
    }
    int sumOfCubes = 0;
    while(n!=0){
        int lastDigit = n%10;
        sumOfCubes = sumOfCubes + pow(lastDigit,count);
        n = n/10;
    }
    return (sumOfCubes == originalNum);
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    if(ArmstrongNum(n)){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not an Armstrong Number";
    }
}