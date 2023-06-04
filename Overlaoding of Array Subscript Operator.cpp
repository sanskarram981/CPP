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
    int arr[2];
    public:
    Point(int a=0,int b=0)
    {
        arr[0] = a;
        arr[1] = b;
    }
    
    int& operator[](int pos)
    {
        if(pos == 0)
        return arr[pos];
        else if(pos == 1)
        return arr[pos];
        else
        std::cout<<"Out of Bound"<<std::endl;
    }
    
    void print()
    {
        std::cout<<"("<<this->arr[0]<<"+"<<this->arr[1]<<"i"<<")"<<std::endl;
    }
};

int main()
{
    Point p1;
    Point p2(4,5);
    
    p1.print();
    p2.print();
    
    p1[0] = 11;
    p1[1] = 26;
    
    p2[0] = 5;
    p2[1] = 4;
    
    p1.print();
    p2.print();
    
    return 0;
}
