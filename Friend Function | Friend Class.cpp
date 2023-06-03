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
    int x;
    public:
    Base(int a):x{a}
    {
        
    }
    
    //friend function declaration
    friend void setX(Base&,int);
    friend int getX(const Base&);
    friend class FBase;
};

//friend function definition
void setX(Base& obj,int k)
{
    obj.x = k;
}
//friend function definition
int getX(const Base& obj)
{
    return obj.x;
}

class FBase
{
    private:
    int y;
    public:
    FBase():y{0}
    {
        
    }
    
    void setX(Base& obj,int k)
    {
        obj.x = k;
    }
    
    int getX(const Base& obj)
    {
        return obj.x;
    }
};

int main()
{
    Base b1(12);
    std::cout<<getX(b1)<<std::endl;
    setX(b1,99);
    std::cout<<getX(b1)<<std::endl;
    
    FBase f1;
    f1.setX(b1,199);
    std::cout<<f1.getX(b1)<<std::endl;
    return 0;
}
