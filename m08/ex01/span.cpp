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
    size_t d = std::distance(begin, end);
    std::cout <<  d << std::endl;
    if ((this->v.size() + d) >= N)
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
    std::vector<int> vec = this->v;
    std::vector<int>::iterator it;

    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = vec.begin();
    std::sort(vec.begin(), vec.end());
    int save;
    save = *(it + 1) - *it;
    for (size_t i = 0; i < vec.size(); i++)
    {
        if (save > (*(it + 1) - *it))
            save = (*(it + 1) - *it);
        it++;
    }
    return (save);
}

unsigned int span::longestSpan()
{
    std::vector<int> vec = this->v;
    std::vector<int>::iterator it;

    if (this->v.size() <= 1)
    {
        throw no_span();
    }
    it = vec.begin();
    std::sort(vec.begin(), vec.end());
    int save;
    save = *(vec.end() - 1) - *it;
    return (save);
}