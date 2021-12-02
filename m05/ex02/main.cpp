#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat b("hhh", 1);
        // ShrubberyCreationForm f("shrcf");
        //f.beSigned(b);
        //b.executeForm(f);

        // RobotomyRequestForm r("shrcf1");
        // r.beSigned(b);
        // b.executeForm(r);
        
        PresidentialPardonForm p("tahjhhh");
        p.beSigned(b);
        b.executeForm(p);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}