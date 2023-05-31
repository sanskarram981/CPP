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
    std::cout<<"One"<<std::endl;
    std::cout<<"Two"<<std::endl;
    goto alpha;
    std::cout<<"Three"<<std::endl;
    std::cout<<"Four"<<std::endl;
    alpha:
    goto beta;
    std::cout<<"Five"<<std::endl;
    beta:
    std::cout<<"Six"<<std::endl;

    return 0;
}
