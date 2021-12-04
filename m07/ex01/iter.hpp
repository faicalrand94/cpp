#ifndef  IETR_HPP
#define IETR_HPP

#include <iostream>

template<typename iter>
void update(iter *ar, int length, void (f)(iter const &))
{
    for (int i = 0; i < length; i++)
    {
        f(ar[i]);
    }
}

#endif