/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<iostream>
using namespace std;

class Base
{
    int x;
    public:
    static int y;
    public:
    Base(int a,int b)
    {
        x = a;
        y = b;
    }
    int getX()
    {
        return x;
    }
    static int getY()
    {
        return y;
    }
    void print()
    {
        std::cout<<"the value of x & y are : "<<x<<" "<<y<<std::endl;
    }
//     static void printt()
//     {
//         std::cout<<"the value of x & y are : "<<x<<" "<<y<<std::endl;
//     }
};

int Base::y;

int main()
{
    Base b1(12,99);
    std::cout<<b1.getX()<<std::endl;
    std::cout<<b1.getY()<<std::endl;
    b1.print();
    // b1.printt();

    std::cout<<Base::y<<std::endl;
    std::cout<<Base::getY()<<std::endl;

    return 0;
}
