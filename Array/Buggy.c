// write an buggy code
// 1. 1st bug: the program will not stop when the user input a negative number
// 2. 2nd bug: the program will not stop when the user input a non-integer number
// 3. 3rd bug: the program will not stop when the user input a non-integer number
#include <stdio.h>
#include <stdlib.h>
void printColoum(int height);
int main(){
    int h;
    scanf("%d",&h);
    printColoum(h);
    
}
void printColoum(int height){
    for(int i =0;i<=height;i++){
        for(int j = i+1;i<height;i++){
            printf("#\n ");

        }
        // printf("#\n");
    }
}