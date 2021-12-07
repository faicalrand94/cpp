#ifndef  IETR_HPP
#define IETR_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    size_t _size;
    T *ar;

public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array &f);
    Array &operator=(const Array &f);
    class Outofrange : public std::exception
    {
        const char* what() const throw();
    };
    size_t  size() const;
    T& operator[](int);
};

template<typename T>
Array<T>::Array() 
{
    _size = 0;
    std::cout << "Default constructor called" << std::endl;
    ar = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    std::cout << "constructor called" << std::endl;
    ar = new T[n];
}

template<typename T>
Array<T>::~Array()
{
    std::cout << "destructor called" << std::endl;
    delete[] this->ar;
}

template<typename T>
Array<T>::Array(const Array<T> &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

template<typename T>
Array<T>& Array<T>::operator=(const Array<T> &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->_size = f._size;
    this->ar = new T[f._size];
    for (size_t i = 0; i < f._size; i++)
    {
        this->ar[i] = f.ar[i];
    }
    return (*this);
}

template<typename T>
const char* Array<T>::Outofrange::what() const throw()
{
    return "Out Of Range";
}

template<typename T>
size_t Array<T>::size() const
{
    return (this->_size);
}

template<typename T>
T& Array<T>::operator[](int i)
{
    
    if (i >= static_cast<int>(this->_size) || i < 0)
        throw Outofrange();
    return (ar[i]);
}

#endif
