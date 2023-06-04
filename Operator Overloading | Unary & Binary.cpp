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
    Point():x{0},y{0}
    {
        std::cout<<"default constructor is called....."<<std::endl;
    }
    Point(int a,int b):x{a},y{b}
    {
        std::cout<<"parameterized constructor is called....."<<std::endl;
    }
    Point operator+(const Point& obj)
    {
        Point p;
        p.x = this->x+obj.x;
        p.y = this->y+obj.y;
        return p;
    }
    
    Point operator-()
    {
        return Point(-this->x,-this->y);
    }
    void print()
    {
        std::cout<<"("<<(this->x)<<"+"<<(this->y)<<"i)"<<std::endl;
    }
};

int main()
{
    Point p1(5,2);
    Point p2(6,7);
    p1.print();
    p2.print();
    
    Point p3 = p1 + p2;
    p3.print();
    
    Point p4 = -p3;
    p4.print();
    
    return 0;
}
