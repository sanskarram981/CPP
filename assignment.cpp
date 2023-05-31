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
    int x,y,z;
    x = y = z = 13;
    
    std::cout<<x<<std::endl;
    std::cout<<y<<std::endl;
    std::cout<<z<<std::endl;
    
    int w = 2;
    std::cout<<w<<std::endl;
    w += 1;
    std::cout<<w<<std::endl;
    w -= 1;
    std::cout<<w<<std::endl;
    w *= 2;
    std::cout<<w<<std::endl;
    w /= 3;
    std::cout<<w<<std::endl;
    w %= 1;
    std::cout<<w<<std::endl;
    w <<= 1;
    std::cout<<w<<std::endl;
    w >>= 1;
    std::cout<<w<<std::endl;
    w ^= 1;
    std::cout<<w<<std::endl;


    return 0;
}
