/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Base1
{
    int x;
    public:
    Base1(int a):x{a}
    {
        std::cout<<"Parameterized Constrcutor of B1 is called...."<<std::endl;
    }
    
    void print()
    {
        std::cout<<"the value of x = "<<x<<std::endl;
    }
};

class Base2
{
    int x;
    int y;
    int z;
    
    public:
    Base2(int a,int b,int c):x{a},y{b},z{c}
    {
        std::cout<<"Parameterized Constrcutor of B2 is called...."<<std::endl;
    }
    
    void print()
    {
        std::cout<<"the value of x = "<<x<<" y = "<<y<<" z = "<<z<<std::endl;
    }
};

class Base3
{
    char x;
    public:
    Base3(int a):x{a}
    {
        std::cout<<"Parameterized Constrcutor of B3 is called...."<<std::endl;
    }
    
    void print()
    {
        std::cout<<"the value of x = "<<x<<std::endl;
    }
};

class Base4
{
    char x;
    public:
    Base4(int a):x(a)
    {
        std::cout<<"Parameterized Constrcutor of B4 is called...."<<std::endl;
    }
    
    void print()
    {
        std::cout<<"the value of x = "<<x<<std::endl;
    }
};

int main()
{
    Base1 b1(99);
    Base2 b2(99,88,77);
    Base3 b3('A');
    Base4 b4('B');
    
    b1.print();
    b2.print();
    b3.print();
    b4.print();

    return 0;
}
