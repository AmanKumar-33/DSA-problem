// 
#include<stdio.h>
int fib(int num) // Fibonacci value of a number

{

 switch(num)

 {

 case 0:

 return(0);

 break;

 case 1:

 return(1);

 break;

 default:

 return(fib(num - 1) + fib(num - 2));
 break;

 }

}
