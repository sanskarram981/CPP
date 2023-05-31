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
    
    int x = 12;
    int y = 19;
    
    (x==12)?std::cout<<"x == 12"<<std::endl:std::cout<<"x != 12"<<std::endl;
    (x==12)?(y==19)?std::cout<<"x == 19"<<std::endl:std::cout<<"x != 19"<<std::endl:std::cout<<"x != 12"<<std::endl;

    return 0;
}
