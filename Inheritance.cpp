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
    int x;
    protected:
    int y;
    public:
    int z;
    Test(int a=11,int b=22,int c=33):x{a},y{b},z{c}
    {
        
    }
};

class Test1:private Test 
{
    public:
    /*
    void printX()
    {
        std::cout<<this->x<<std::endl;
    }
    
    void printY()
    {
        std::cout<<this->y<<std::endl;
    }
    
    void printZ()
    {
        std::cout<<this->z<<std::endl;
    }
    */
};

class Test2:protected Test 
{
    public:
    /*
    void printX()
    {
        std::cout<<this->x<<std::endl;
    }
    */
    
    void printY()
    {
        std::cout<<this->y<<std::endl;
    }
    
    void printZ()
    {
        std::cout<<this->z<<std::endl;
    }
};

class Test3:public Test 
{
    public:
    /*
    void printX()
    {
        std::cout<<this->x<<std::endl;
    }
    */
    void printY()
    {
        std::cout<<this->y<<std::endl;
    }
    
    void printZ()
    {
        std::cout<<this->z<<std::endl;
    }
};

class Animal
{
    private:
    string name;
    public:
    void walking()
    {
        std::cout<<"Animal is walking"<<std::endl;
    }
    void sleeping()
    {
        std::cout<<"Animal is sleeping"<<std::endl;
    }
};

class Dog : public Animal
{
    public:
    void sounding()
    {
        std::cout<<"\"Dog\" is barking........"<<std::endl;
    }
};

class Cat : public Animal
{
    public:
    void sounding()
    {
        std::cout<<"\"Cat\" is meowing........"<<std::endl;
    }
};

class Pig : public Animal
{
    public:
    void sounding()
    {
        std::cout<<"\"Pig\" is hoecking........"<<std::endl;
    }
};

int main()
{
    Test1 t1;
    std::cout<<"------------------------------------------------------------"<<std::endl;
    Test2 t2;
    t2.printY();
    t2.printZ();
    std::cout<<"------------------------------------------------------------"<<std::endl;
    Test3 t3;
    t3.printY();
    t3.printZ();
    std::cout<<"------------------------------------------------------------"<<std::endl;
    Animal a1;
    a1.walking();
    a1.sleeping();
    std::cout<<"------------------------------------------------------------"<<std::endl;
    Dog d1;
    Cat c1;
    Pig p1;
    
    d1.sleeping();
    d1.walking();
    d1.sounding();
    std::cout<<"------------------------------------------------------------"<<std::endl;
    c1.sleeping();
    c1.walking();
    c1.sounding();
    std::cout<<"------------------------------------------------------------"<<std::endl;
    p1.sleeping();
    p1.walking();
    p1.sounding();
    
    return 0;
}
