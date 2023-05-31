/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
void print(int* mat,int m,int n)
{
    std::cout<<"the elements of tha matrix are : "<<std::endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            std::cout<<*((mat+i*n)+j)<<" ";
        }
        std::cout<<std::endl;
    }
}

int main()
{
    int mat0[3][3] = {
                      {1,2,3},
                      {4,5,6},
                      {7,8,9}
                     };
                    
    int mat1[3][3] = {1,2,3,4,5,6,7,8,9};
    
    int mat2[][3] = {1,2,3,4,5,6};

    
    print((int*)mat0,3,3);
    print(&mat0[0][0],3,3);
    print((int*)mat1,3,3);
    print((int*)mat2,2,3);
}
