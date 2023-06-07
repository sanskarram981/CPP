/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int const& max(int const& x,int const& y)
{
    std::cout<<"max(int,int)"<<std::endl;
    return x>y?x:y;
}

template<typename T>
T const& max(T const& x,T const& y)
{
    std::cout<<"max(T,T)"<<std::endl;
    return x>y?x:y;
}

template<typename T>
T const& max(T const& x,T const& y,T const& z)
{
    std::cout<<"max(T,T,T)"<<std::endl;
    return ::max<>(::max<>(x,y),z);
}

int main()
{  
    ::max(13,15);
    ::max<>(13,14);
    ::max<int>(15,16);
    ::max(12.0,13.2);
    ::max('c','m');
    ::max(10,20,30);
    return 0;
}
