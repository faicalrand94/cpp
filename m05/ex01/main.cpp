#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try
    {
        Bureaucrat b("hhh", 50);
        Form f("ddd", 50, 50);
        b.signForm(f);
        // f.beSigned(b);
        std::cout << f;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}