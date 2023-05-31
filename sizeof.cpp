/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

class A
{
    int x ;
    double y;
    char t;
};

int main()
{
    
    int x = 12;
    int y = 19;
    int arr[6] = {12,12,13,14};
    int arr2[2][3] = {{2,3},{1,11,1}};
    int arr1[] = {12,13};
    A a1;
    
    std::cout<<sizeof(x)<<std::endl;
    std::cout<<sizeof(arr)<<std::endl;
    std::cout<<sizeof(arr1)<<std::endl;
    std::cout<<sizeof(arr2)<<std::endl;
    std::cout<<sizeof(int)<<std::endl;
    std::cout<<sizeof(A)<<std::endl;
    std::cout<<sizeof(a1)<<std::endl;
    std::cout<<sizeof(991+9981)<<std::endl;
    
    return 0;
}
