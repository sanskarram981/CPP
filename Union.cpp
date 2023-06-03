#include <iostream>
using namespace std;
union square
{
    int width;
    int height;
};

int Area(int x,int y)
{
    return x*y;
}

int main()
{
    square sq;
    sq.width = 10;
    std::cout<<Area(sq.width,sq.height)<<std::endl;
    return 0;
}
