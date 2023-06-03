/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class Point
{
    private:
    int x;
    int y;
    
    public:
    //Default Constructor
    Point()
    {
        x = 0;
        y = 0;
        std::cout<<"Deafult Constructor is called..."<<std::endl;
    }
    //Parameterized Constructor
    Point(int a,int b)
    {
        x = a;
        y = b;
        std::cout<<"Parameterized Constructor is called..."<<std::endl;
    }
    //Copy Constructor
    Point(const Point& p)
    {
        x = p.x;
        y = p.y;
        std::cout<<"Copy Constructor is called..."<<std::endl;
    }
    
    ~Point()
    {
        std::cout<<"Default Destructor is called..."<<std::endl;
    }
    
    void print()
    {
        std::cout<<"The value of x = "<<x<<" and y = "<<y<<std::endl;
    }
    
};

class Base
{
    int* ptr;
    
    public:
    Base():ptr{nullptr}
    {
        std::cout<<"Default Constructor is called......"<<std::endl;
    }
    
    Base(int* temp):ptr{temp}
    {
        std::cout<<"Parameterized Constructor is called......"<<std::endl;
    }
    
    ~Base()
    {
        delete ptr;
        std::cout<<"Deafult Destructor is called......"<<std::endl;
    }
    
    void print()
    {
        std::cout<<"the value of ptr = "<<((ptr == nullptr)?"nullptr":"!nullptr")<<std::endl;
    }
};

int main()
{
    Point p1;
    Point p2(12,13);
    Point p3 = p1;
    p1.print();
    p2.print();
    p3.print();
    
    Base b1;
    Base b2(new int(99));
    b1.print();
    b2.print();
    
}
