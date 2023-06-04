/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;


class Test 
{
    private:
    int* x;
    
    public:
    Test(int val=0):x{new int(val)}
    {
        
    }
    
    void setX(int a)
    {
        *this->x = a;
    }
    
    int getX()
    {
        return *this->x;
    }
    
    int* rptr()
    {
        return x;
    }
};


class Test1 
{
    private:
    int* x;
    
    public:
    Test1(int val=0):x{new int(val)}
    {
        
    }
    
    void setX(int a)
    {
        *this->x = a;
    }
    
    int getX()
    {
        return *this->x;
    }
    
    int* rptr()
    {
        return x;
    }
    
    Test1& operator = (const Test1& obj)
    {
        if(this == &obj)
        return *this;
        
        *this->x = *obj.x;
        return *this;
    }
};

int main()
{
    Test t1;
    Test t2(99);
    
    std::cout<<t1.getX()<<std::endl;
    std::cout<<t2.getX()<<std::endl;
    
    t1 = t2;
    
    std::cout<<t1.getX()<<std::endl;
    std::cout<<t2.getX()<<std::endl;
    
    std::cout<<(t1.rptr() == t2.rptr())<<std::endl;
    
    std::cout<<"----------------------------------------------------"<<std::endl;
    
    Test1 tt1;
    Test1 tt2(102);
    
    std::cout<<tt1.getX()<<std::endl;
    std::cout<<tt2.getX()<<std::endl;
    
    tt1 = tt2;
    
    std::cout<<tt1.getX()<<std::endl;
    std::cout<<tt2.getX()<<std::endl;
    
    std::cout<<(tt1.rptr() == tt2.rptr())<<std::endl;
    return 0;
}
