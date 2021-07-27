/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no);
long nCr(int n, int r);

void nCr (long nCr);

int main(){

  int n, r,nCr;

  std::cout << "Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;

   nCr =  n! / [r! * (n-r)!] ;

  std::cout << "nCr = "<<nCr;
  

  std::cout << std::endl;
  
}

