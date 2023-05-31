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
    int val;
    std::cin>>val;
    
    switch(val)
    {
        case 1:
        std::cout<<"One"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        case 2:
        std::cout<<"Two"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        case 3:
        std::cout<<"Three"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        default:
        std::cout<<"Deafult"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
    }
    
    char ct;
    std::cin>>ct;
    switch(ct)
    {
        case 'A':
        std::cout<<"Apple"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        case 'B':
        std::cout<<"Ball"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        case 'C':
        std::cout<<"Cat"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
        break;
        default:
        std::cout<<"Deafult"<<std::endl;
        std::cout<<"Hadoop"<<std::endl;
    }


    return 0;
}
