/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include<string>

using namespace std;

template<typename T>
T get_count(vector<T> v)
{
    T count = 0;
    for(auto x:v)
    {
        count += x;
    }
    return count;
}

template<>
string get_count(vector<string> v)
{
    int count = 0;
    for(auto &x:v)
    {
        for(auto &y:x)
        {
            count += y;
        }
    }
    
    return to_string(count);
}
int main()
{
    vector<int> v1 = {1,2,3,4,5};
    vector<double> v2 = {1.0,2.0,3.0,4.0,5.0,6.0};
    vector<char> v3 = {'0','1','d','e'};
    vector<string> v4 = {"abc","def","ghi"};
    
    std::cout<<get_count(v1)<<std::endl;
    std::cout<<get_count(v2)<<std::endl;
    std::cout<<get_count(v3)<<std::endl;
    std::cout<<get_count(v4)<<std::endl;
    
    return 0;
}
