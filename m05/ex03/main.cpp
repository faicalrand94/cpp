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
        // RobotomyRequestForm r("shrcf1");
        // f.beSigned(b);
        // f.execute(b);
    //     r.beSigned(b);
    //     r.execute(b);
    //    b.executeForm(f);
    //    b.executeForm(r);
            // RobotomyRequestForm r("shrcf1");
        // f.beSigned(b);
        // f.execute(b);
        PresidentialPardonForm p("tahjhhh");
        p.beSigned(b);
        p.execute(b);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}