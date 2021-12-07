#ifndef  WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <vector>

class NOT_FOUND : public std::exception
{
    const char* what() const throw();
};


template<typename T>
void easyfind(T &c, int a)
{
    typename T::iterator it;
    it = std::find(c.begin(), c.end(), a);
    if (it == c.end())
        throw NOT_FOUND();
    std::cout << "find it : " << *it << std::endl;
}



#endif