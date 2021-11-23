#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat b("hhh", 50);
        std::cout << b.getGrade()<< "\n";
        b.decrement();
        std::cout << b.getGrade()<< "\n";
        Bureaucrat a("hhh", 2);
        std::cout << a.getGrade()<< "\n";
        a.increment();
        std::cout << a.getGrade()<< "\n";

    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    
    

    return (0);
}