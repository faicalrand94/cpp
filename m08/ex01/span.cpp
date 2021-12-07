#include "span.hpp"

span::span()
{
    std::cout << "Default constructor called" << std::endl;
}


span::span(unsigned int N)
{
    std::cout << "constructor called" << std::endl;
    this->N = N;
}

span::~span()
{
    std::cout << "destructor called" << "\n";
}

void span::addNumber(int nbr)
{
    if (this->v.size() < N)
        this->v.push_back(nbr);
    else
        throw is_full();
}

const char* span::is_full::what() const throw()
{
    return "is full";
}

const char* span::no_span::what() const throw()
{
    return "no_span";
}

unsigned int span::shortestSpan(int nbr)
{
    std::vector<int>::iterator it;
    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = std::min_element(this->v.begin(), this->v.end());
    return (*it);
}

unsigned int span::longestSpan(int nbr)
{
    std::vector<int>::iterator it;
    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = std::max_element(this->v.begin(), this->v.end());
    return (*it);
}