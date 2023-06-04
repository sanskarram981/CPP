/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void* operator new (size_t size)
{
    void* ptr = malloc(size);
    std::cout<<"Global overloaded of new called..."<<std::endl;
    return ptr;
}


void operator delete(void* p)
{
    free(p);
    std::cout<<"Global overloaded of delete called..."<<std::endl;
    return;
}


void* operator new (size_t size,int k)
{
    void* ptr = malloc(size);
    std::cout<<"Global overloaded of new called : "<<k<<std::endl;
    return ptr;
}

void* operator new[](size_t size)
{
    void* ptr = malloc(size);
    std::cout<<"Global overloaded of new[] called : "<<size<<std::endl;
    return ptr;
}

void operator delete[](void* p)
{
    free(p);
    std::cout<<"Global overloaded of delete[] called..."<<std::endl;
    return;
}

class Test 
{
    private:
    int x;
    public:
    Test(int a=0):x{a}
    {
        
    }
    
    static void* operator new(size_t size)
    {
        void* ptr = malloc(size);
        std::cout<<"Inside class new is called"<<std::endl;
        return ptr;
    }
    
    static void operator delete(void* p)
    {
        free(p);
        std::cout<<"Inside class delete is called"<<std::endl;
        return;
    }
};

int main()
{
   int* ptr1 = new int;
   delete ptr1;
   
   int* ptr2 = new(26) int;
   delete ptr2;
   
   int* ptr3 = new int[4];
   delete[] ptr3;
   
   Test* t1 = new Test();
   delete t1;
   
   return 0;
}
