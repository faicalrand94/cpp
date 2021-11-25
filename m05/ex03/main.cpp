#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    try
    {
        Bureaucrat b("hhh", 1);
        Intern o;
        Form *f = o.makeForm("presidential pardon", "target");
        f->beSigned(b);
        f->execute(b);
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }
    return (0);
}