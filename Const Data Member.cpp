/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<math.h>
using namespace std;

class Base
{
    private:
    const float pi = 3.14;
    float r;
    
    public:
    Base(float f):r{f}
    {
        std::cout<<"Parameterized Constructor of Base is Called...."<<std::endl;
    }
    
    float Area()
    {
        return pi*pow(r,2);
    }
};

class Base1
{
    private:
    const float pi;
    float r;
    
    public:
    Base1(float f):pi{f},r{0.0f}
    {
        std::cout<<"Parameterized Constructor of Base1 is Called...."<<std::endl;
    }
    
    void setR(float rad)
    {
        r = rad;
    }
    
    float Area()
    {
       return pi*pow(r,2);
    }
};

int main()
{
    Base b1(3);
    Base b2(10);
    
    std::cout<<b1.Area()<<std::endl;
    std::cout<<b2.Area()<<std::endl;
    
    Base1 b3(3.14);
    std::cout<<b3.Area()<<std::endl;
    b3.setR(10);
    std::cout<<b3.Area()<<std::endl;
    
    return 0;
}
