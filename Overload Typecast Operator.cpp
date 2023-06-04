/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

class Rupee
{
    private:
    int x;
    public:
    Rupee(int a=0):x{a}
    {
        
    }
    
    /*
    operator Dollar()
    {
        return Dollar(this->x/80);
    }
    */
    void print()
    {
        std::cout<<"INR : "<<this->x<<std::endl;
    }
    
};

class Dollar
{
    
    private:
    int x;
    public:
    Dollar(int a=0):x{a}
    {
        
    }
    
    operator Rupee()
    {
        return Rupee(80*this->x);
    }
    
    void print()
    {
        std::cout<<"USD : "<<this->x<<std::endl;
    }
};



int main()
{
    Dollar d1;
    Dollar d2(99);
    
    Rupee r1;
    Rupee r2(100);
    
    d1.print();
    d2.print();
    
    r1.print();
    r2.print();
    
    r1 = d2;
    r1.print();
    
    return 0;
}
