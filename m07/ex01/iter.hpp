#ifndef  IETR_HPP
#define IETR_HPP

#include <iostream>

template<typename T>
void iter(T *ar, int length, void (f)(T const &))
{
    for (int i = 0; i < length; i++)
    {
        f(ar[i]);
    }
}

#endif