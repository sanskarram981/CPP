/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<string>
using namespace std;

int main()
{
    int x = 12;
    int y = 13;
    
    std::cout<<"the value of x is : "<<x<<std::endl;
    
    int &z = x;
    std::cout<<"the value of x is : "<<x<<std::endl;
    std::cout<<"the value of z is : "<<z<<std::endl;
    
    z = 99;
    
    std::cout<<"the value of x is : "<<x<<std::endl;
    std::cout<<"the value of z is : "<<z<<std::endl;
    
    //z = y;  // error

    return 0;
}
