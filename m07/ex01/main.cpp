#include "iter.hpp"

template<typename T>
void f(T const &s)
{
    std::cout << s << std::endl;
}

int main()
{
   std::cout << "test 1 string\n" << std::endl; 
    {
        std::string s[4] = {"abc", "def", "hgi", "jkl"};

        iter(s, 4, f);
    }
    std::cout << "---------------\n" << std::endl; 
      std::cout << "test 2 float\n" << std::endl; 
    {
        float a[5] = {2.5f, 2.3f, 77.0f, 666.666f, 6.66f};

        iter(a, 5, f);
    }
    std::cout << "---------------\n" << std::endl; 
      std::cout << "test 3 double\n" << std::endl; 
    {
        double a[5] = {2.55, 2.37, 77.0, 666.666666, 6.66666};

        iter(a, 5, f);
    }
    std::cout << "---------------\n" << std::endl; 
    return (0);
}
