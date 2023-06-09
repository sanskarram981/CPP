/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void sep()
{
    for(int i=0;i<100;i++)
    {
        std::cout<<"-";
    }
    std::cout<<std::endl;
}
class Engineer
{
    private:
    int x;
    public:
    Engineer()
    {
        std::cout<<"Engineer Constrcutor is called...."<<std::endl;
    }
    
    Engineer(int a):x{a}
    {
        std::cout<<"Engineer Parameterized Constrcutor is called...."<<std::endl;
    }
    
    void coding()
    {
        std::cout<<"coding"<<std::endl;
    }
    
    void work()
    {
        std::cout<<"engineer work"<<std::endl;
    }
};

class Youtuber
{
    private:
    int y;
    public:
    Youtuber()
    {
        std::cout<<"Youtuber Constrcutor is called...."<<std::endl;
    }
    
    Youtuber(int a):y{a}
    {
        std::cout<<"Youtuber Parameterized Constrcutor is called...."<<std::endl;
    }
    
    void shooting()
    {
        std::cout<<"shooting"<<std::endl;
    }
    
    void work()
    {
        std::cout<<"youtuber work"<<std::endl;
    }
};

class Person:public Engineer,public Youtuber
{
    private:
    int z;
    public:
    Person()
    {
        std::cout<<"Person Constrcutor is called...."<<std::endl;
    }
    
    void sleeping()
    {
        std::cout<<"sleeping"<<std::endl;
    }
    
    /*void work()
    {
        std::cout<<"person work"<<std::endl;
    }
    */
};


class Freelancer:public Engineer,public Youtuber
{
    private:
    int z;
    public:
    Freelancer()
    {
        std::cout<<"Freelancer Constrcutor is called...."<<std::endl;
    }
    Freelancer(int a,int b,int c):z{a},Engineer{a},Youtuber{b}
    {
        std::cout<<"Freelancer Parameterized Constrcutor is called...."<<std::endl;
    }
    
    void sleeping()
    {
        std::cout<<"freelancing"<<std::endl;
    }
};
int main()
{
    sep();
    
    Person p1;
    p1.coding();            //engineer method
    p1.shooting();          //youtuber method
    p1.sleeping();          //person   method
    
    sep();
    
    Engineer e1 = p1;
    e1.coding();
    //e1.shooting();
    //e1.sleeping();
    
    sep();
    
    Youtuber y1 = p1;
    //y1.coding();
    y1.shooting();
    //y1.sleeping();
    
    sep();
    
    p1.Youtuber::work();
    p1.Engineer::work();
    Engineer e2 = p1;
    e2.work();
    Youtuber y2 = p1;
    y2.work();
    static_cast<Engineer>(p1).work();
    static_cast<Youtuber>(p1).work();
    
    sep();
    
    Freelancer f1;
    Freelancer f2(12,13,14);
    
    
    return 0;
}
