/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void print(int arr[],int n)
{
    std::cout<<"the element of the array are : ";
    for(int i=0;i<n;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<std::endl;
}

int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[] = {11,12,13};
    int arr3[6] = {21,22,23};
    
    std::cout<<arr1[0]<<std::endl;
    std::cout<<1[arr1]<<std::endl;
    std::cout<<*(arr1+2)<<std::endl;
    //std::cout<<*(arr1+7)<<std::endl; //error
    //std::cout<<arr1[8]<<std::endl;   //error
    print(arr1,5);
    print(arr2,3);
    print(arr3,6);
    return 0;
}
