/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    for(int i=1;i<=10;i++)
    {
        std::cout<<"Apache Hadoop : "<<i<<std::endl;
    }
    
    int i=1;
    for(;i<=10;)
    {
        std::cout<<"Apache Nifi : "<<i<<std::endl;
        i++;
    }
    
    int j = 1;
    while(j<=10)
    {
        std::cout<<"Apache Impala : "<<j++<<std::endl;
    }
    
    int k = 0;
    do
    {
        std::cout<<"Apache Mahout : "<<k+1<<std::endl;
        k++;
    }while(k<10);

    return 0;
}
