#include "A.hpp"
#include "B.hpp"

// void get_which_class(Base *b)
// {
//   if (dynamic_cast<A*>(b))
//   {

//   }
//   else if (dynamic_cast<B*>(b))
//   {

//   }
// }

void identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
}

int main()
{
  Base *b = new A();
  // std::cout << << std::endl;
  return (0);
}