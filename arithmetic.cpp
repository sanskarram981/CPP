/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int x = 23;
    int y = 4;
    float f1 = 12.5;
    float f2 = 2.0;
    
    std::cout<<x+y<<std::endl;
    std::cout<<x-y<<std::endl;
    std::cout<<y-x<<std::endl;
    std::cout<<x*y<<std::endl;
    std::cout<<x/y<<std::endl;
    std::cout<<y/x<<std::endl;
    std::cout<<(float)y/x<<std::endl;
    std::cout<<y%x<<std::endl;
    std::cout<<x%y<<std::endl;
    
    std::cout<<f1+f2<<std::endl;
    std::cout<<f1-f2<<std::endl;
    std::cout<<f2-f1<<std::endl;
    std::cout<<f2*f1<<std::endl;
    std::cout<<f2/f1<<std::endl;
    std::cout<<f1/f2<<std::endl;
    std::cout<<(int)f1%(int)f2<<std::endl;
    std::cout<<(int)f2%(int)f1<<std::endl;


    return 0;
}
