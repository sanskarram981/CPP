/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

template<typename T>
T Max(T x,T y)
{
    return x>y?x:y;
}

template<typename T>
T Min(T x,T y)
{
    return x<y?x:y;
}

template<typename RT,typename T1,typename T2>
RT getMax(T1 x,T2 y)
{
    return x>y?x:y;
}

template<typename T1,typename T2>
auto getMin(T1 x,T2 y)
{
    return x<y?x:y;
}

int main()
{
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    std::cout<<Max<int>(12,13)<<std::endl;
    std::cout<<Max<float>(12.6f,11.9f)<<std::endl;
    std::cout<<Max<double>(12.3,11.7)<<std::endl;
    std::cout<<Max<char>('A','a')<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    std::cout<<Max(12,13)<<std::endl;
    std::cout<<Max(12.6f,11.9f)<<std::endl;
    std::cout<<Max(12.3,11.7)<<std::endl;
    std::cout<<Max('A','a')<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    std::cout<<Min(12,13)<<std::endl;
    std::cout<<Min(12.6f,11.9f)<<std::endl;
    std::cout<<Min(12.3,11.7)<<std::endl;
    std::cout<<Min('A','a')<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    std::cout<<getMax<int>(12.3,13)<<std::endl;
    std::cout<<getMax<double>(12.3,13)<<std::endl;
    std::cout<<getMax<bool>(12.3,13)<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    std::cout<<getMin(13,12.3)<<std::endl;
    std::cout<<getMin(11,12.3)<<std::endl;
    std::cout<<getMin(13,14)<<std::endl;
    std::cout<<"--------------------------------------------------------------"<<std::endl;
    return 0;
}
