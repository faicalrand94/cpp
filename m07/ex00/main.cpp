#include "whatever.hpp"

int main()
{
    int x = 10;
    int y = 20;
    std::cout << "before swap : x ==> " << x << " y ==> " << y << std::endl;
    std::cout << "min ==> " << min(x, y) << std::endl;
    std::cout << "max ==> " << max(x, y) << std::endl;
    swap(x, y);
    std::cout << "after swap : x ==> " << x << " y ==> " << y << std::endl;


    std::cout << "\n**********************************\n\n";

    char a = 'A';
    char z = 'Z';
    std::cout << "before swap : a ==> " << a << " z ==> " << z << std::endl;
    std::cout << "min ==> " << min(a, z) << std::endl;
    std::cout << "max ==> " << max(a, z) << std::endl;
    swap(a, z);
    std::cout << "after swap : a ==> " << a << " z ==> " << z << std::endl;  
    return (0);
}