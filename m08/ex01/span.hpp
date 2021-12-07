#include <iostream>
#include <vector>

class span
{
private:
    unsigned int N;
    std::vector<int> v;

public:
    span();
    span(unsigned int N);
    ~span();
    void addNumber(int nbr);
    class is_full : public std::exception
    {
        const char* what() const throw();
    };
    class no_span : public std::exception
    {
        const char* what() const throw();
    };
    unsigned int shortestSpan(int);
    unsigned int longestSpan(int);
};
