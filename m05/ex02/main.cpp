#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    try
    {
        Bureaucrat b("hhh", 1);
        ShrubberyCreationForm f("shrcf");
        f.beSigned(b);
        f.execute(b);
        b.executeForm(f);
        std::cout << f;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}