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
    Point(int a=0,int b=0):x{a},y{b}
    {
        
    }
    
    void print()
    {
        std::cout<<this->x<<"+"<<this->y<<"i"<<std::endl;
    }
    
    friend istream& operator >> (istream&,Point&);
    friend ostream& operator << (ostream&,Point&);
};

istream& operator >> (istream& input,Point& obj)
{
    char c1,c2;
    input>>obj.x>>c1>>obj.y>>c2;
    return input;
}

ostream& operator << (ostream& output,Point& obj)
{
    output<<obj.x<<"+"<<obj.y<<"i";
    return output;
}

int main()
{
    Point p1;
    Point p2(2,4);
    
    p1.print();
    p2.print();
    
    cout<<p2<<endl;
    cin>>p1;
    cout<<p1<<endl;

    return 0;
}
