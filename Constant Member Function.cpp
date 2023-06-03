/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Base
{
    private:
    mutable int x;
    int y;
    public:
    Base()
    {
        
    }
    Base(int a,int b):x{a},y{b}
    {
        
    }
    void setX(const int a)
    {
        x = a;
    }
    int getX() const
    {
        return x;
    }
    int getY() const
    {
        x = 999;
        return y;
    }
};



int main()
{
    Base b1(12,13);
    std::cout<<b1.getX()<<std::endl;
    std::cout<<b1.getY()<<std::endl;
    return 0;
}
