#ifndef  MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{

public:
    
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack()
    {
        
    }

    ~MutantStack()
    {

    }

    MutantStack(const MutantStack<T> &f)
    {
        *this = f;
    }

    MutantStack<T> &operator=(const MutantStack &f)
    {
       this->c = f.c;
       return (*this);
    }

    iterator begin()
    {
        return (this->c.begin());
    }

    iterator end()
    {
        return (this->c.end());
    }
};

#endif