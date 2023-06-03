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
    int &x;
    
    public:
    Base(int& a):x{a}
    {
        
    }
    
    int getX()
    {
        return x;
    }
    
    void setX(int b)
    {
        x = b;
    }
    
    void settX(int& b)
    {
        x = b;
    }
};

int main()
{
    int val = 12;
    Base b1(val);
    std::cout<<b1.getX()<<std::endl;
    //b1.settX(13);
    b1.setX(13);
    std::cout<<b1.getX()<<std::endl;
    return 0;
}
