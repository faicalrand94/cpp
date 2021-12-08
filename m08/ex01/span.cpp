#include "span.hpp"

span::span()
{
    this->N = 0;
}


span::span(unsigned int N)
{
    this->N = N;
}

span::~span()
{
}

void span::addNumber(int nbr)
{
    if (this->v.size() < N)
        this->v.push_back(nbr);
    else
        throw is_full();
}

void span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if ((this->v.size() + (end - begin)) >= N)
        throw is_full();
    this->v.insert(this->v.end(), begin, end);
}

const char* span::is_full::what() const throw()
{
    return "Error: is full";
}

const char* span::no_span::what() const throw()
{
    return "Error: no_span";
}

unsigned int span::shortestSpan()
{
    std::vector<int>::iterator it;
    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = std::min_element(this->v.begin(), this->v.end());
    return (*it);
}

unsigned int span::longestSpan()
{
    std::vector<int>::iterator it;
    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = std::max_element(this->v.begin(), this->v.end());
    return (*it);
}