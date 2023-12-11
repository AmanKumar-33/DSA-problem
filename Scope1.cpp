// Block scope and golbal Scope 
#include <iostream>
using namespace std;

int i = 7;   // i has global scope, outside all blocks


int main( int argc, char *argv[] ) {
   int i = 5;   // i has block scope, hides i at global scope
   cout << "Block-scoped i has the value: " << i << "\n";
   cout << "Global-scoped i has the value: " << ::i << "\n";
}